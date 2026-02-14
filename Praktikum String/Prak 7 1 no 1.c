#include <stdio.h>
#include <string.h>

void dgnscanf() {
char str1[100];

printf("Masukkan kalimat: ");
scanf("%s", str1);
printf("Hasil: %s\n", str1);
printf("Jumlah string: %d\n", (int)strlen(str1));

}

void dgngets() {
char str2[100];

printf("Masukkan kalimat: ");
gets(str2);
printf("Hasil: %s\n", str2);
printf("Jumlah string: %d\n", (int)strlen(str2));

}

void dgnfgets() {
char str3[100];

printf("Masukkan kalimat: ");
fgets(str3, sizeof(str3), stdin);
printf("Hasil: %s\n", str3);
printf("Jumlah string: %d\n", (int)strlen(str3));

}

int main() {
// dgnscanf();
// dgngets();
dgnfgets();

    return 0;
}