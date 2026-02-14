#include<stdio.h>
char *nama_bulan(int n);
char *nama_bulan(int n){ 
    static char *bulan[] = 
{
"Kode bulan salah", 
    "Januari", 
    "Februari", 
    "Maret",
    "April",
    "Mei",
    "Juni",
    "Juli", 
    "Agustus", 
    "September", 
    "Oktober", 
    "November", 
    "Desember"
};

return ((n<1||n>12) ? bulan[0] : bulan[n]);
}

int main(){
    int bl;
    char *pkar;

    printf("Bulan 1..12 : ");
    scanf("%d", &bl);
    pkar = nama_bulan(bl);
    printf("Bulan ke-%d adalah %s\n", bl, pkar);
    return 0;
}