# C# solution

This is the solution of the _sumOfTwoNumbers_ problem for the _C#_ language:

## solution

create a simple library class with one method: `int SumOfTwoNumbers(int a, int b)` this should return the sum of both parameters `a + b`

[see solution](./SumOfTwoNumbers/Solution.cs)

## build

to build the solution just run the following commands:

```bash
dotnet build
```

## run

to run the solution with specific input we must have the solution _built_. and then run the following command:

```bash
dotnet run -p Main
```

then just add two integers separated by line breaks and the sum will be given in the next line.

## test

to test the solution first _build_ it and then run the following command:

```bash
dotnet test
```

**Note:** to build the project you must have the dotnet core 3.1+ sdk. [See Dependencies](../../Readme.md#Dependencies)
