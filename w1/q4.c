#include <stdio.h>

// swap function
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main(int argc, char *argv[])
{
    int a = 3;
    int b = 4;
 
    printf("a is %d and b is %d\n", a, b);
 
    swap(&a,&b);
    printf("a is now %d and b is now %d", a, b);
}
