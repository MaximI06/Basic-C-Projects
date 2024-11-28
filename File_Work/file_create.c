#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

   /*FILE*pf = fopen("test.txt", "w");

    fprintf(pf, "Test Text");    
    
    fclose(pf);
*/

    if(remove("test.txt") == 0){
       printf("File Deleted Succesfully");    
    }
    else{
        printf("File was not deleted");
    }
    

    return 0;
}