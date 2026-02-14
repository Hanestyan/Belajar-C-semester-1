#include<stdio.h>

int pjgstr(char str[]) {
    int panjang = 0;
    while(str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main(){
    char str[100];
    
    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", str);
    
    printf("Kalimat yang dimasukkan: %s\n", str);
    int length = pjgstr(str);
    printf("Panjang string: %d karakter\n", length);      

    return 0;
}