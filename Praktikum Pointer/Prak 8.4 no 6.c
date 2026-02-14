#include<stdio.h>
void rotasi(int *a, int *b, int *c ) {
    int n;
    n = *a;
    *a = *b;
    *b = *c;
    *c = n;
}

int main(){
    int a=1, b=2, c=3;
    printf("Sebelum rotasi: a=%d, b=%d, c=%d\n", a, b, c);
    rotasi(&a, &b, &c);
    printf("Setelah rotasi: a=%d, b=%d, c=%d\n", a, b, c);
    
    return 0;
}