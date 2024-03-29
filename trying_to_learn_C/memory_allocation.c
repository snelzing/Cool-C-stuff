#include <stdio.h>
#include <stdlib.h> 

void print_bytes(void *ptr, int size) 
{
    unsigned char *p = ptr;
    int i;
    for (i=0; i<size; i++) {
        printf("%02hhX ", p[i]);
    }
    printf("\n");
}

int main( )
{
    // Declare pointer variables
    int  *i ;
    float  *a ; 
    /* Allocate memory using malloc and store the starting 
    address of allocated memory in pointer variable*/
    i = (int*) malloc (sizeof(int));
    a = (float*) malloc (sizeof(float));
    // Declare employee structure
    struct emp
    {
        char name [20];
        int age;
        float sal;
    };
    // Declare structure pointer
    struct emp *e;
    e = (struct emp *) malloc (sizeof (struct emp));

    print_bytes(&i, sizeof(i));
}

