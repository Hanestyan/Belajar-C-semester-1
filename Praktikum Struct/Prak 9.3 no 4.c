#include <stdio.h>
#include <string.h>

struct nilai
{
    char nama[100];
    int tgs, uts, uas;
    float tot;
    char grade;
};
struct highest
{
    char nama[3];
    float nil;
} maks;

void input(struct nilai mhs[], int n) {
    for (int i = 0; i < n; i++)
    {
    printf("Masukkan data mahasiswa ke %d\n", i + 1);
    printf("Nama: ");
    scanf(" %s", mhs[i].nama);
    printf("Nilai tugas: ");
    scanf("%d", &mhs[i].tgs);
    printf("Nilai uts: ");
    scanf("%d", &mhs[i].uts);
    printf("Nilai uas: ");
    scanf("%d", &mhs[i].uas);
        
    mhs[i].tot = (mhs[i].tgs*0.2 + mhs[i].uts*0.4 + mhs[i].uas*0.4);
    
    if (mhs[i].tot >= 80) mhs[i].grade = 'A';
    else if (mhs[i].tot >= 70) mhs[i].grade = 'B';
    else if (mhs[i].tot >= 60) mhs[i].grade = 'C';
    else if (mhs[i].tot >= 50) mhs[i].grade = 'D';
    else mhs[i].grade = 'E';
    }
}

void show(struct nilai mhs[], int n) {
    printf("-----------------------------------------------------------------\n");
    printf("| No | Nama Mahasiswa | Tugas | UTS | UAS | Akhir | Grade |\n");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d | %s | %d | %d | %d | %g | %c\n ", i + 1,
            mhs[i].nama, mhs[i].tgs, mhs[i].uts, 
            mhs[i].uas, mhs[i].tot, mhs[i].grade);
    }

    printf("-----------------------------------------------------------------\n");
    printf("Total mahasiswa: %d\n", n);
}

void highest (struct nilai mhs[], int n) {
    maks.nil = mhs[0].tot;
    for (int i = 1; i < n; i++) {
        if (mhs[i].tot > maks.nil) 
            maks.nil = mhs[i].tot;
            strcpy(maks.nama, mhs[i].nama);
    }
    printf("Nilai tertinggi\n Nama: %s\n Nilai: %g\n", maks.nama, maks.nil);
    
}

int main() {
    int n;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);
    
    struct nilai mhs[100];
    input(mhs, n);
    show(mhs, n);
    highest(mhs, n);
    printf("Press any key to continue");
    getchar();
    getchar();
    
    return 0;
}