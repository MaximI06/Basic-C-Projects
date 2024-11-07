#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

int num;

int fibonacci_1 = 0;
int fibonacci_2 = 1;
int fibonacci_sum;
int i = 0;

printf("Enter an positive integer:");
scanf(" %d ", &num);


while(i < num){
    i ++;

    fibonacci_sum = fibonacci_1 + fibonacci_2;

    printf("%d", fibonacci_sum);

    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_sum;
    fibonacci_sum = 0;
}




    return 0;
}
