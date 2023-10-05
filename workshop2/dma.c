#include <stdio.h>
#include <stdlib.h>

int main(){
    // array to store 10 students name
    char name[10][20];

    // asking for user input
    for(int i = 0; i < 10; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", name[i]);
    }

    // printing the names
    for(int i = 0; i < 10; i++){
        printf("Name of student %d: %s\n", i+1, name[i]);
    }

    return 0;

}