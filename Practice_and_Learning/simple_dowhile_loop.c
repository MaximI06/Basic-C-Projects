#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

int num = 0;
int sum = 0;

do{
    printf("Enter a number above 0: ");
    scanf("%d", &num);

    if(num > 0)
    {
        sum = sum + num; 
    }

}while(num > 0); 

printf("sum: %d" ,sum);


    return 0;
}
