# STANDARC C LIBRARIES

A library is a file containing several files that can be used a single entity

## Static Library

Linked into a program during the linking phase. There's no need to link it again during run time

### LIbrary Creation

the command 'rc' is used to create static libraries
the command 'ranlib' is used to index the library file

NOTE: When copying a library, use the flag '-p' after the 'cp' command to ensure all the
file attributes are copied too

### File usage

the command 'cc' is used with other flags to use the libraries

## Dynamic/Shared Library

Linked into a program during linking and also during program loading times
During compilation, it compiles for 'Position independent code'

### Library Creation
Same as the Static Libraries but with the flags:
'-fPIC' and '-c'

### File Usage

the command 'cc' is used together with other flags

## EXamples
ar rc lib_name.a file_name.o

cc -fPIC -c util_file.c
cc -shared libutil.so util_file.o util_net.o


cc main.o  -L. -lutil -o prog

NOTE:
Dynamic libraries are to be added to the system path for them to be globally avilable
