# C - Dynamic libraries

.
## Table of contents

- create Dynamic libraries
- Use Dynamic libraries
- How to use $LD_LIBRARY_PATH environment variable
- Basic usage nm, ldd, ldconfig

## Introduction

Libraries are one way  of containing object file used in linking phase and reason
why it's important to use it . it help to ordered object file in libraries and faster
than linking a program whose object file are on separate on the disk.

## how to create Dynamic libraries
To create dynamic libraries first we link our file using this command `gcc -c -fPIC library.c -o library.o`
And create library using command "gcc -fPIC -shared library.o -o liblibrary.so"

- `fPIC` : flag generates position-independent code, which is required for shared libraries.
- `shared`: flags specifies that you want to create a shared library
- `o` : spicifies output file name
- liblibrary.so : is the name of dynamic libraries
## how to use dynamic  library
- when you didn't specify where it located you can use `LD_LIBRARY_PATH="./" ./len`
## Error you may encounter

```
error while loading shared libraries: libdynamic.so: cannot open shared object file: No such file or directory

```
you can solved using the step below by $LD_LIBRARY_PATH.

## What is the environment variable $LD_LIBRARY_PATH and how to use it
The $LD_LIBRARY_PATH environment variable is a variable used by the os to
specify additional directories where dynamic libraries should be searched
for at runtimei.
Here's how you can use $LD_LIBRARY_PATH:
* step1 : Setting the variable:
     - export LD_LIBRARY_PATH=/path/to/library/directory
Replace `/path/to/library/directory` with the actual directory where your dynamic library is located.
* step2: Run your program
    - After setting variable you can rum with out an error
## Basic usage nm, ldd, ldconfig
 - `nm` (Symbol Table Viewer): displays the symbol table of an object file or library.
 - `ldd` (Library Dependency Checker): lists the shared libraries required by an executable or shared library
 - `ldconfig` (Library Configuration):used to configure the runtime linker/loader cache.
	It updates the shared library cache and resolves library dependencies.
## create bash file create script static libraries
1. #!/bin/bash
2. gcc -c -Wall -pedantic -Werror -Wextra *.c
3. gcc -shared -fPIC *.o -o liball.so

