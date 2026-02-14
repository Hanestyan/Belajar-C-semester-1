#include <stdio.h>

float masukan(int n) {
    float data, total = 0;
    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%f", &data);
        total += data;
    }
    return total;
}

float average(int n, float total) {
    return total / n;
}

int main() {
    int n;
    
    printf("Jumlah data: ");
    scanf("%d", &n);
    
    float total = masukan(n);
    printf("Rata-rata: %g\n", average(n, total));
    
    return 0;
}