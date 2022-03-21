# C Programming
## Pointers, Arrays and Strings

### 1. Pointers
These are variables that contain the address of another variable
Pointer declaration:
	type *var_name;
Pointer initialization/definition:
	type *var_name = &var;

### 2. Arrarys
An array is a collection of variables withof the same data type.
These arrays are stored under one name, and each element is accessed by an element index
Array declaration:
	type array_name[ array size ];
Arrary initialization:
	type array_name[] = {val0, val1, val2, val3, val4};
	or
	arrary_name[index] = val;

### 3. Strings
This is a special type of array that consists ofcharacters.
The end of a string is signified by a null delimiter, '\0'
