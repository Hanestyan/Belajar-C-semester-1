#include<stdio.h>

void copystr(char asal[], char tujuan[]) {
    int i = 0;
    while (asal[i] != '\0') {
        tujuan[i] = asal[i];
        i++;
    }
    tujuan[i] = '\0'; 
}

int main(){
    char asal[100];
    char tujuan[100];

    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", asal);

    copystr(asal, tujuan);
    printf("Kalimat yang disalin: %s\n", tujuan);
    
    return 0;
}