#include<stdio.h>

int pjgstr(char str[]) {
    int panjang = 0;
    while(str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}
void balikstr(char str[], char hasil[]) {
    int panjang = pjgstr(str);
    for (int i = 0; i < panjang; i++)
    {
        hasil[i] = str[panjang - 1 - i];
    }
    hasil[panjang] = '\0'; 
    
}
int main(){
    char str[100];
    char strbalik[100];
    
    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", str);
    
    printf("Kalimat yang dimasukkan: %s\n", str);
    int length = pjgstr(str);
    printf("Panjang string: %d karakter\n", length);      

    balikstr(str, strbalik);
    printf("Kalimat setelah dibalik: %s\n", strbalik);

    return 0;
}