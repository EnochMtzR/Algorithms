# Algorithms

This repository stores all solved algorithms from HackerRank and other programming challenge websites.

## Goal

The goal will be to solve at least one algorithm each day in all the languages discussed bellow.

## Languages

The algorithms I've been solving are divided in 5 main languages: C, C++, C#, Python and Javascript. Most of the algorithms are repeated among languages. However, some are specific to each language.

## Tests

To ensure all solutions are correct. I use unit testing to ensure the results of the functions provide a correct solution, as well as to test edge cases.

## Dependencies

This section discusses the necessary dependencies to compile and test all algorithm projects. _**Note:** all project write-ups should contain a section specific for the problem as well_

### C / C++

- **gcc _compiler_** - All projects have been compiled and tested with gcc; therefore, any other compiler should be regarded as not supported. Having said that, you are welcome to try and build any project with your compiler of choice. However, be mindful that changes may be needed to have a successful compilation. If you are on _Linux_, it is quite possible _gcc_ is already installed. For any windows users, you may use the [MinGW](http://mingw-w64.org/doku.php) project to obtain the gcc compiler.

- **GNU Make** - The project uses the _GNU Make_ build automation tool to compile and run test on each project. If you are using _Linux_, this tool is most likely already installed on your system. However, if you are on windows you may use the same [MinGW](http://mingw-w64.org/doku.php)

- **CMake** - All c / c++ projects use the CMake tool to build the project and test it.

- **GTest** - This is the google testing framework for C / C++ projects. **Note:** this dependency will be downloaded automatically by the CMake builder.

### C\#

- **.Net Core 3.1+ SDK/Runtime** - All C# projects are built using the .Net 5.0 SDK. However, all projects may be built using version 3.0 of .Net Core and up.

- **NUnit** - The testing framework for .Net projects. **Note:** This will be installed automatically via Nuget by running `dotnet build`

### Javascript

- **Node.js** - To be able to run and test projects written on Javascript, we need to install [Node.js](http://nodejs.org)
- **Jest** - This is the testing framework that Javascript projects will be using. **Note:** you do not require to install jest. by installing dependencies of projects, this package will be added automatically.

### Python

- **Python3** - All python projects have been tested with _python3_. You should assume and treat _python2_ as broken even though some projects might work fine in both.

## The Algorithms

- [Sum of two Numbers](./sumOfTwoNumbers/Write-up.md)
