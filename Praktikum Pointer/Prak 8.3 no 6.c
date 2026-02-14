#include<stdio.h>

int main(){
int a[5] = {2,4,8,1,23};
int c = 5;
int *ptr1 = &c; 
int *ptr2 = a;
printf("Nilai c = %d\n", *ptr1);
printf("Alamat c di memori = %p\n", ptr1);
printf("Nilai a[0] = %d\n", *ptr2);
printf("Alamat a[0] di memori = %p\n", ptr2);

    return 0;
}