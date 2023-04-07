# C - Static libraries

Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
## Table of contents

-create static libraries

## Introduction

create Static libraries is important.

## how to create static libraries 
we create static libraries using this command "$ ar -rc libname.a *.o"
-ar: command used to create archives and modifies file with this option follow
-rc: this are two option combined together "-c" option create static libraries
and "r" option help to insert object file in archives
-libname.a is the name of libraries
