# IntermediateCpp
This repository contains the code for the course Intermediate C++ by Chuck McCullough.  This material is for the exclusive use of the students of the course.  Please do not distribute this material. Copyright 2025 Chuck McCullough.

## Table of Contents
- [First Classes](Landscaping)
- [Functions & Pointers](FunctionsPointers)
- [Namespaces](Namespaces)
- [Strings](Strings)
- [Streams](Streams)
- [Statics](Statics)
- [Memory](Memory)
- [LinkedList](LinkedList)
- [Templates](Templates)
- [Templates20](Templates20)
- [Operator Overloading](OperatorOverloading)
- [Smart Pointers](SmartPointers)
- [Move Semantics](MoveSemantics)
- [Inheritance](Inheritance)
- [Interfaces](Interfaces)
- [Exceptions](Exceptions)
- [Containers](Containers)
- [Functional Programming](MenuSystemStarter)
- [Functional Programming with Function Pointers](MenuSystemFunctionPtr)
- [Functional Programming with Interfaces](MenuSystemInterface)
- [Functional Programming with Functor](MenuSystemFunctor)
- [Functional Programming with Lambdas](MenuSystemLambda)
- [ForEach with Lambdas](ForEach)
- [Accumulate with Lambdas](Accumulate)
- [Threads](Threads)
- [Tasks](Tasks)

## Building the code
The source includes *CMakeLists.txt* which is used by CMAKE to create makefiles for the projects.  The student can use CMAKE to create the makefiles and then use the makefiles to build the code.  
Visit (cmake.org)[https://cmake.org] for more information on CMAKE.  Install cmake on your system before proceeding.

## Visual Studio Code

Visual Studio Code is a language neutral, platform neutral IDE.  With plugins, many of the build tasks are automated.

You can download Visual Studio Code from (code.visualstudio.com)[https://code.visualstudio.com]. Visual Studio Code is free.

We use the following extensions in Visual Studio Code:
* C/C++ by Microsoft
* C/C++ Extension Pack by Microsoft
* CMake Tools by Microsoft

## Git
You can download this repository from GitHub as a zip file.  If you prefer to download the repository using git, you can install git from (git-scm.com)[https://git-scm.com].  Git is free.

Visual Studio Code integrates with git.  You can use git from the command line or from Visual Studio Code.

The repository has already been downloaded and installed on the RLS.

## Google Test

Some of the lab projects for the class utilize a test-driven approach and use *Google Test* to implement the tests.  The root CMakeLists.txt file will download and install Google Test.  The student does not need to do anything to install Google Test.

## Using Visual Studio Code
Open VS Code and open the *IntermediateCpp* folder (under c:/Studentwork).  If on your own machine, use the option to clone a git repository.  The URL is ```https://github.com/chuckmccullough85/IntermediateCpp.git```

If you have not installed the recommended extensions to VS Code, you will be prompted to install them.  Install the recommended extensions.  Yuo may need to restart VS Code after installing the extensions.

Once the extension are installed, the bottom toolbar will show CMAKE commands. You will need to click the toolkit to choose an available compiler on your system.

There are multiple projects in the workspace.  The current target to run is shown to the right of the run/debug buttons.  You can change the target by clicking on the target and choosing a different target.  

![VSCodeBuildBar.jpg](images/VSCodeBuildBar.jpg)



