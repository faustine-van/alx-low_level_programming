# C - Static libraries

Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
## Table of contents

-create static libraries

## Introduction

Libraries are one way  of containing object file used in linking phase and reason
why it's important to use it . it help to ordered object file in libraries and faster
thank linking a program whose object file are on separate on the disk.

## how to create static libraries 
we create static libraries using this command "### $ ar -rc libname.a *.o"
- ar: command used to create archives and modifies file with this option follow
- rc: this are two option combined together "-c" option create static libraries
and "r" option help to insert object file in archives
- libname.a is the name of libraries
## how to use static library
we use static libraries using "$ gcc  -L. -lname -o main"
- gcc: command to compile using the follow option 
- L: specifies path to the given libraries "." referring to current directories
- o: create executed file
## In addition there are other command that used:
- $ ranlib libname.a 
or by adding an extra flag (-s) to the ar command and it becomes like this:
- $ ar -rcs libname.a *.o : this is same as  $ ranlib libname.a : used to indexing files
