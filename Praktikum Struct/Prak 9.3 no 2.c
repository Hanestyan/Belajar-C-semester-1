#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nama[50];
    int day, month, year; 
    char jk;                
    float gaji;
} Pegawai;

void input(Pegawai *p, int id) {
    p->id = id;

    printf("\nData pegawai ke-%d\n", id);
    printf("Nama : ");
    scanf(" %[^\n]", p->nama); 
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    scanf("%d-%d-%d", &p->day, &p->month, &p->year);
    printf("Jenis Kelamin (L/P) : ");
    scanf(" %c", &p->jk);      
    printf("Gaji/bulan : ");
    scanf("%g", &p->gaji);
}

void tampil(Pegawai p[], int jumlah) {
    printf("\nData pegawai yang telah diinputkan:\n");
    for(int i = 0; i < jumlah; i++) {
        printf("\nNo ID\t: %d\n", p[i].id);
        printf("Nama\t: %s\n", p[i].nama);
        printf("Lahir\t: %d-%d-%d\n", p[i].day, p[i].month, p[i].year);
        printf("JK\t: %c\n", p[i].jk);
        printf("Gaji\t: Rp %g\n", p[i].gaji);
    }
}

int main() {
    int jumlah;
    printf("Berapa jumlah pegawai : ");
    scanf("%d", &jumlah);
    Pegawai emp[jumlah];
    for(int i = 0; i < jumlah; i++) 
        input(&emp[i], i + 1);
    tampil(emp, jumlah);
    printf("\nPress any key to continue");
    getchar();
    getchar();
    getchar();
    
    return 0;
}