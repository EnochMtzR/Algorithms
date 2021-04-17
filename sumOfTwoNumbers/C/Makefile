ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=out
endif

.PHONY: clean
.PHONY: test
.PHONY: build

PATHU = Unity/src/
PATHS = src/
PATHT = test/
PATHB = build/
PATHD = build/depends/
PATHO = build/objs/
PATHR = build/results/
PATHBT = build/tests/

BUILD_PATHS = $(PATHB) $(PATHD) $(PATHO) $(PATHR) $(PATHBT)

SRCT = $(wildcard $(PATHT)*.c)
SRCC = $(wildcard $(PATHS)*.c)

COMPILE=gcc -c
LINK=gcc
DEPEND=gcc -MM -MG -MF
CFLAGS=-I. -I$(PATHU) -I$(PATHS) -DTEST

RESULTS = $(patsubst $(PATHT)Test%.c, $(PATHR)Test%.txt,$(SRCT))

BUILD_OBJECTS = $(patsubst $(PATHS)%.c, $(PATHO)%.o, $(SRCC))

PASSED = `grep -s PASS $(PATHR)*.txt`
FAIL = `grep -s FAIL $(PATHR)*.txt`
IGNORE = `grep -s IGNORE $(PATHR)*.txt`

build: $(BUILD_PATHS) $(PATHB)solution.$(TARGET_EXTENSION)

test: $(BUILD_PATHS) $(RESULTS)
	@echo "-----------------------\nIGNORES:\n-----------------------"
	@echo "$(IGNORE)"
	@echo "-----------------------\nFAILURES:\n-----------------------"
	@echo "$(FAIL)"
	@echo "-----------------------\nPASSED:\n-----------------------"
	@echo "$(PASSED)"
	@echo "\nDONE"

$(PATHB)solution.$(TARGET_EXTENSION): $(BUILD_OBJECTS)
	$(LINK) -o $@ $^

$(PATHR)Test%.txt: $(PATHBT)Test%.$(TARGET_EXTENSION)
	-./$< > $@ 2>&1

$(PATHBT)Test%.$(TARGET_EXTENSION): $(PATHO)Test%.o $(PATHU)unity.o $(PATHO)%.o #$(PATHD)Test%.d
	$(LINK) -o $@ $^

$(PATHO)Test%.o:: $(PATHT)*.c
	$(COMPILE) $(CFLAGS) $< -o $@

$(PATHU)unity.o:: $(PATHU)*.c $(PATHU)*.h
	$(COMPILE) $(CFLAGS) $< -o $@

$(PATHO)%.o:: $(PATHS)%.c
	$(COMPILE) $(CFLAGS) $< -o $@

$(PATHD)%.d:: $(PATHT)*.c
	$(DEPEND) $@ $<

$(PATHB):
	$(MKDIR) $(PATHB)

$(PATHD):
	$(MKDIR) $(PATHD)

$(PATHO):
	$(MKDIR) $(PATHO)

$(PATHR):
	$(MKDIR) $(PATHR)

$(PATHBT):
	$(MKDIR) $(PATHBT)

clean:
	$(CLEANUP) $(PATHO)*.o
	$(CLEANUP) $(PATHB)*.$(TARGET_EXTENSION)
	$(CLEANUP) $(PATHBT)*.$(TARGET_EXTENSION)
	$(CLEANUP) $(PATHR)*.txt

.PRECIOUS: $(PATHBT)Test%.$(TARGET_EXTENSION)
.PRECIOUS: $(PATHB)%.$(TARGET_EXTENSION)
.PRECIOUS: $(PATHD)%.d
.PRECIOUS: $(PATHO)%.o
.PRECIOUS: $(PATHR)%.txt
