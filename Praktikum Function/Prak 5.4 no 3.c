#include <stdio.h>

// Fungsi tanpa return value (void)
void halo() {
    printf("Selamat pagi\n");
}

int main() {
    // Coba assign fungsi void ke variabel
    int x = halo();  
    
    printf("Nilai x: %d\n", x);
    return 0;
}