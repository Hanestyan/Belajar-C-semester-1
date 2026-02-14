#include<stdio.h>
#include<string.h>

void ulang(char str[], char str2[]) {
    printf("Masukkan kalimat: ");
    gets(str);
    printf("Panjang string: %d\n", (int)strlen(str));
    strcpy(str2, str);
    printf("Kalimat yang disalin: %s\n", str2);
    strrev(str);
    printf("Kalimat dibalik: %s\n", str);

}
int main(){
    char str[100];
    char str2[100];
    ulang(str, str2);
    
    return 0;
}