#include<stdio.h>

struct size {
    char sz[3];       
    char nama[10];       
    int hrg, jum, dis, tax;     
    float tot, stot;
}   size[3];   

void input(){
    int n;
    printf("Berapa jumlah data (maks 3)");
    for (int i = 0; i < n; i++)
    {
        printf("Data ke-%d\n", i+1);
        printf("Ukuran (S/M/L): ");
        scanf(" %s", &size[i].sz);
        printf("Nama Pesanan: ");
        scanf(" %s", &size[i].nama);
        printf("Harga Pesanan: ");
        scanf("%d", &size[i].hrg);
        printf("Jumlah Pesanan: ");
        scanf("%d", &size[i].jum);
        size[i].stot = size[i].hrg * size[i].jum;
    }
}

void nota(struct size *buy, int jum, int dis, int stot, int tot, int tax){
    
    printf("-------------------------------------------------\n");
    printf("| Ukuran | Nama Pesanan | Harga | Jumlah | Total |\n");
    printf("-------------------------------------------------\n");
    if (jum < 10)
    dis = stot * 0.05;
    else
    dis = 0;
    tax = (stot - dis) * 0.1;
    tot = stot - dis + tax;
}

void show(struct size *show, int n) {
printf("-------------------------------------------------\n");
printf("                     Toko Laris                  \n");
printf("-------------------------------------------------\n");
printf("| Ukuran Baju | Naama Ukuran | Harga per potong |\n");
printf("-------------------------------------------------\n");

for (int i = 0; i < n; i++)

    printf("| %s | %s | %d |\n", i + 1, size[i].sz, size[i].nama, size[i].hrg);

printf("--------------------------------------------------\n");
printf("                                Jumlah bayar: Rp. %d", &size->stot);
printf("                                Pajak 10%   : Rp. %d;",&size->tax);
printf("                                Total bayar : Rp. %d;", &size->tot);
}

int main(){
    struct size size[3]; 
    int n;
    input();
    nota(size, n, size->jum, size->dis, size->stot, size->tax);
    show(size, n);

    return 0;
}