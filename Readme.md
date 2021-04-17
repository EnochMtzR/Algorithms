# Algorithms

This repository stores all solved algorithms from HackerRank and other programming challenge websites.

## Goal

The goal will be to solve at least one algorithm each day in all the languages discussed bellow.

## Languages

The algorithms I've been solving are divided in 5 main languages: C, C++, C#, Python and Javascript. Most of the algorithms are repeated among languages. However, some are specific to each language.

## Dependencies

This section discusses the necessary dependencies to compile and test all algorithm projects. _**Note:** all project write-ups should contain a section specific for the problem as well_

### C

- **gcc _compiler_** - All projects have been compiled and tested with gcc; therefore, any other compiler should be regarded as not supported. Having said that, you are welcome to try and build any project with your compiler of choice. However, be mindful that changes may be needed to have a successful compilation. If you are on _Linux_, it is quite possible _gcc_ is already installed. For any windows users, you may use the [MinGW](http://mingw-w64.org/doku.php) project to obtain the gcc compiler.

- **GNU Make** - The project uses the _GNU Make_ build automation tool to compile and run test on each project. If you are using _Linux_, this tool is most likely already installed on your system. However, if you are on windows you may use the same [MinGW](http://mingw-w64.org/doku.php)

- **Unity _testing framework_** - All _C_ projects require Unity for testing the algorithm. However everything has been set up already with a _MakeFile_ so you should only add the [Unity repository](https://github.com/ThrowTheSwitch/Unity) to the project folder this should be as simple as running `git clone https://github.com/ThrowTheSwitch/Unity.git`

### The Algorithms

- [Sum of two Numbers](./sumOfTwoNumbers/Write-up.md)
