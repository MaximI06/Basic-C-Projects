#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

    char name [20];

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}