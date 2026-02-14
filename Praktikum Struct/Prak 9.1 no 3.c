#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char jenis[10];
    int harga;
    int qty;
} Pesanan;

void input(Pesanan p[], int *count) {
    char lanjut, kode;
    do {
        printf("\nPesanan ke-%d\n", *count + 1);
        printf("Jenis [D/P/S] : ");
        scanf(" %c", &kode);
        
        kode = toupper(kode);
        
        if(kode == 'D' || kode == 'P' || kode == 'S') {
            printf("Jumlah\t: ");
            scanf("%d", &p[*count].qty);
            if(kode == 'D') strcpy(p[*count].jenis, "DADA");
            else if(kode == 'P') strcpy(p[*count].jenis, "PAHA");
            else strcpy(p[*count].jenis, "SAYAP");
            p[*count].harga = (kode == 'D') ? 5000 : 
                             (kode == 'P') ? 4000 : 3000;
            (*count)++;
        }
        printf("\nMASUKKAN PESANAN ANDA:\n");
        printf("Ada lagi (y/t) ? ");
        scanf(" %c", &lanjut);
    } while(toupper(lanjut) == 'Y');
}

void menu() {
    printf("\nDAFTAR HARGA\n");
    printf("Kode\tJenis\t\tHarga\n");
    printf("D\tDada\t\tRp 5.000\n");
    printf("P\tPaha\t\tRp 4.000\n");
    printf("S\tSayap\t\tRp 3.000\n");
    printf("\n*Harga belum termasuk pajak 10%%\n");
}

void nota(Pesanan p[], int count) {
    printf("\n\n\tGEROBAK FRIED CHICKEN\n");
    printf("----------------------------------------\n");
    int total = 0;
    for(int i = 0; i < count; i++) {
        int subtotal = p[i].harga * p[i].qty;
        printf("%d. %s\t%d x %d = Rp%d\n", 
               i + 1, p[i].jenis, p[i].qty, p[i].harga, subtotal);
        total += subtotal;
    }
    printf("----------------------------------------\n");
    printf("Subtotal\t: Rp%d\n", total);
    printf("Pajak 10%%\t: Rp%d\n", total / 10);
    printf("TOTAL\t\t: Rp%d\n", total + (total / 10));
    printf("----------------------------------------\n");
}

int main() {
    Pesanan pesanan[100];
    int jumlah = 0;
    printf("TOKO GFC - GEROBAK FRIED CHICKEN\n");
    printf("--------------------------------\n");
    menu();
    input(pesanan, &jumlah);
    nota(pesanan, jumlah);
    
    return 0;
}