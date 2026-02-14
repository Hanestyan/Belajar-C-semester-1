void naikkan_nilai(int *, float *);
void naikkan_nilai(int *x, float *y){
    *x = *x + 2;
    *y = *y + 2.5f;
}
#include<stdio.h>

int main(){
    int a = 3; float b = 7.5f;

    printf("SEMULA : a = %d  b = %g\n", a, b);

    naikkan_nilai(&a, &b);
    printf("KINI	: a = %d  b = %g\n", a, b);
    
    return 0;
}