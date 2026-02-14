#include<stdio.h>

int main() {  
    int arr[] = {10, 20, 30, 40, 50};  
    int cari, found;
    char c = 'y';  
    while (c == 'y') {  
    printf("Input yang dicari: ");
    scanf("%d", &cari); 
    int *p = arr;
    found = 0;
    while (p < arr + 5) {  
        if (*p == cari) {
        found = 1; }
        p++; }

    if (found)  
        printf("Nilai %d ditemukan\n", cari);  
    else  
        printf("Nilai %d tidak ditemukan\n", cari);  

        printf("Cari lagi? (y/t): ");
        scanf(" %c", &c);  
    }  

    return 0;
}