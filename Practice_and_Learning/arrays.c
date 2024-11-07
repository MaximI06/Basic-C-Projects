#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

int i = 0;
int num [5];

printf("Enter 5 Numbers: ");

while (i < 5){
    scanf("%d", &num[i]);
    i++;
}

int var_1 = num[0];
int var_2 = num[1];

int amt = 0;

do{

   if(var_1 > var_2){
    var_2 = num[i++];
   }
   else if(var_1 < var_2){
    var_1 = num[i++];
   }

} while (var_1 > var_2);



for (size_t i = 0; i < count; i++)
{
    /* code */
}

    return 0;
}

