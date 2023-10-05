#include <stdio.h>
#include <stdlib.h>

int main(){
    char **name;

    // allocate memory for 10 students
    name = (char **)malloc(10 * sizeof(char *));

    // allocate memory for each student
    for(int i = 0; i < 10; i++){
        name[i] = (char *)malloc(20 * sizeof(char));
    }

    // asking for user input
    for(int i = 0; i < 10; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", name[i]);
    }

    // printing the names
    for(int i = 0; i < 10; i++){
        printf("Name of student %d: %s\n", i+1, name[i]);
    }

    // free memory
    for(int i = 0; i < 10; i++){
        free(name[i]);
    }
    free(name);

    return 0;

}

