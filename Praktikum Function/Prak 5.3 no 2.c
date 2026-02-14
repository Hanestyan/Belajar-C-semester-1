#include <stdio.h>

int faktor (int x);
int faktor (int x) {
    if (x <= 1)
    {
        return 1;
    }
    else {
        return x * faktor(x-1);
    }
}

int permutasi (int x, int y);
int permutasi (int x, int y) {

    return faktor(x) / faktor(x - y);

}

int kombinasi (int x, int y);
int kombinasi (int x, int y) {

    return faktor(x) / (faktor (y) * faktor (x-y));

}

int main() {
    int x, y;
    
    printf("Masukkan x: ");
    scanf("%d", &x);
    printf("Masukkan y: ");
    scanf("%d", &y);

    printf("Permutasi P (%d, %d) = %d\n", x, y, permutasi(x, y));
    printf("Kombinasi C (%d, %d) = %d\n", x, y, kombinasi(x, y));
    

    return 0;
}