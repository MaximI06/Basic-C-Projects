#include <stdio.h>

int main() {
    int i = 7, j = 2, k;
    float f = 13.2, g = 2.0, h;

    k = i + j;
    printf(" %i + %i = %i\n", i, j, k);
    k = i - j;
    printf(" %i - %i = %i\n", i, j, k);
    k = i * j;
    printf(" %i * %i = %i\n", i, j, k);
    k = i / j;
    printf(" %i / %i = %i\n", i, j, k);
     k = i % j;
    printf(" %i %% %i = %i\n", i, j, k);

    h = f + g;
    printf(" %f + %f = %f\n", f, g, h);
    h = f - g;
    printf(" %f - %f = %f\n", f, g, h);
    h = f * g;
    printf(" %f * %f = %f\n", f, g, h);
    h = f / g;
    printf(" %f / %f = %f\n", f, g, h);
    
    return 0;
}