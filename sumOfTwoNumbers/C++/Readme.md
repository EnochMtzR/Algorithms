# C++ solution

This is the solution of the _sumOfTwoNumbers_ problem for the _C++_ language:

## solution

create a simple library function `int sumOfTwoNumbers(int a, int b)` this should return the sum of both parameters `a + b`

[see solution](./src/sumOfTwoNumbers.cpp)

## build

to build the solution just run the following commands:

```bash
cmake -S . -B build
cd build && make
```

## run\*

to run the solution with specific input we must have the solution _built_ and then run the following command:

```bash
cd bin && ./solution
```

then just add two integers separated by either space or line breaks and the sum will be given in the next line.

## test\*

to test the solution first _build_ it and then run the following command:

```bash
cd test && ctest
```

**\*Note:** all the commands presented assume you will run them right after building the project. So your current directory should be **build**
