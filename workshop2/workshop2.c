#include <stdio.h>
#include <stdlib.h>

int main(){
    char **a;

    a = (char **) malloc(4* sizeof(char));

    for(int i = 0; i < 4; i++){
        a[i] = (char *) malloc(20* sizeof(char));
    }

    for(int i = 0; i<4; i++){
        printf("Enter name: \n");
        scanf("%s", a[i]);
    }

    for(int i = 0; i<4; i++){
        printf("%s\n",a[i]);
        free(a[i]);
    }

    free(a);

    return 0;
}