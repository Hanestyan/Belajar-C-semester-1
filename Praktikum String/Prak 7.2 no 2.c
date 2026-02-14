#include<stdio.h>

int bandingstr1 (char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("String berbeda pada karakter ke-%d: '%c' dan '%c'\n", i + 1, str1[i], str2[i]);
            return 0;
        }
        i++;
        }

        return (str1[i] == '\0' && str2[i] == '\0');
}

int main(){
    char str1[100];
    char str2[100];

    printf("Masukkan string pertama: ");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Masukkan string kedua: ");
    scanf("%[^\n]s", str2);

    if (bandingstr1(str1, str2)) {
        printf("String sama.\n");
    } else {
        printf("String berbeda.\n");
    }

    return 0;
}