#include<stdio.h>
char strA[80] = "A string to be used for demonstration"; 
char strB[80];

int main(){
    char *pA, *pB;

    puts(strA); pA = strA; 
    puts(pA); pB = strB;
    putchar('\n');

    while(*pA != '\0')
    {
    *pB++ = *pA++;
    }
    *pB = '\0'; 
    puts(strB);
    printf("Alamat awal strA: %p\n", strA);
    printf("Alamat awal strB: %p\n", strB);
    printf("Alamat akhir strA: %p\n", pA);
    printf("Alamat akhir strB: %p\n", pB);
    
    return 0;
}