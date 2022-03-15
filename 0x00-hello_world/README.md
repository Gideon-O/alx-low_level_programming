# 0x00 Hello C
Explore the C foundational knowledge

0. Write a script that runs a C file through the preprocessor and save the result into another file.
    the gcc command is used together with -E to preprocess the file
1. Write a script that compiles a C file but does not link.
    the gcc command together without any argument
2. Write a script that generates the assembly code of a C code and save it in an output file.
    the gcc command together with -S are used to compile to assembly code.
3. Write a script that compiles a C file and creates an executable named cisfun
    the gcc command together with -o argument to output the compiled file with a name ## cisfun
4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
    use the backslash (\) to add the opening double quotation mark at the start of the line. the backslash is an escape expression
5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line
    the # puts function operates as the printf function
6. Write a C program that prints the size of various types on the computer it is compiled and run on.
    I used sizeof(type_var_name) to get the value as an integer value
7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
    i used # -masm=intel argument for gcc compile 
