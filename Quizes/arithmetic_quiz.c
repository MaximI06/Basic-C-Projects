#include <stdio.h>
int main() {
   
    int a = 5, b = 7, c = 0;                    
    c = a - b++;                               //c = 5-7 = -2 (b = 8 from now on) 
    
    printf("First value: (%d)\n", c);          //Print -2
   
    c += ++a;                                  //Incriment "a" by 1 then add C. -2+6 = 4                      
   
    printf("Second value: (%d)\n", c);         //Print 4
   
    b *= 2+(c++/a);                            //b *= 2+(4/6)| b = 8 * 2 (4/6 = 0 expressed as an int) | b = 16
  
    printf("Value of a: (%d)\n", a);           //6
    printf("Value of b: (%d)\n", b);           //16
    printf("Value of c: (%d)\n", c);           //5

    if (b > a) {                               // this is true so it will print "b is greater than a" and this will be the end of the program
        printf("b is greater than a.\n");
    }
   
    else {
        printf("a is greater than or equal to b.\n");
    }
    
    return 0;
}