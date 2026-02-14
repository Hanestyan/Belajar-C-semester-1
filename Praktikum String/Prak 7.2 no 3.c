#include<stdio.h>

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}

int bandingstr2(char str1[], char str2[]) {
    int i = 0;
    
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(toLower(str1[i]) != toLower(str2[i])) {
            return toLower(str1[i]) - toLower(str2[i]);
        }
        i++;
    }
    return toLower(str1[i]) - toLower(str2[i]);
}

int main(){
    char str1[100], str2[100];
    
    printf("Masukkan kalimat pertama: ");
    scanf("%[^\n]", str1);
    getchar();
    
    printf("Masukkan kalimat kedua: ");
    scanf("%[^\n]", str2);
    
    int hasil = bandingstr2(str1, str2);
    
    if (hasil == 0)
        printf("Kedua string sama\n");
    else if (hasil < 0)
        printf("%s lebih kecil dari %s\n", str1, str2);
    else
        printf("%s lebih besar dari %s\n", str1, str2);
    
    return 0;
}