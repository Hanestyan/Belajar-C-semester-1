#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
    char str1[100], str2[100];
    
    printf("Masukkan string 1: ");
    scanf("%s", str1);
    printf("Masukkan string 2: ");
    scanf("%s", str2);
    
    printf("\nstrcmp: %d\n", strcmp(str1, str2));
    printf("strcmpi: %d\n", strcmpi(str1, str2));
    
    return 0;
}