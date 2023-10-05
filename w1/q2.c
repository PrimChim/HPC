#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Hello %s, you are %d years old.", name, age);
    return 0;
}