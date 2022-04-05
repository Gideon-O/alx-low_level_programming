# malloc() and free() functions

malloc() function is used to allocate a portion of memory.
the memory block is not initialized with any value

### declaration
void malloc(var_num * sizeof(data_type))
returns a pointer to the first byte of the allocated memory

free() function in used to free an aloocated memory segment using malloc() function

### declaration
free(*pointer_name)

### other functions
calloc():
	takes two arguments
	memory is initialized with 0
	delcared as: void *calloc(size_t num, size_t size)

realloc():
	takes one argument
	used to reallocate a memory block with new data/size
	declared as: void *realloc(void *pointer, size_t size)
