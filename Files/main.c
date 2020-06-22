
#include <stdio.h> 

FILE *fopen(const char *restrict nmae, const char *resict mode); 
// first arg: pointer to a string that is the name of the external file 
// 2nd arg: character of strings that represents the file mode 
        // "w", "a", "r", "w+", "a+", "r+"
// returns: a point of type FILE* else NULL 
// omiting file name reverts to current directory 

FILE *pfile = NULL; 
char *filename = "myfile.text";
pfile = fopen(filename, "w");
if (pfile != NULL)
    printf("Failed to open %s\n", filename); 

fclose(pfile); 
pfile = NULL; 

