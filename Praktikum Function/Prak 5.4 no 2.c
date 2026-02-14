#include <stdio.h>


int kd(int num) {
    return num * 2;
}

int main() {
    int x = 5;
    
    printf("Sebelum panggil fungsi:\n");
    printf("x = %d\n", x);
    
    // Return value tidak diassign ke variabel
    kd(x);  // Hasilnya 10, tapi tidak disimpan
    
    printf("\nSetelah panggil fungsi:\n");
    printf("x = %d (nilai x tidak berubah)\n", x);
    
    // Bandingkan dengan yang diassign
    int hasil = kd(x);  // Hasilnya 10, dan disimpan ke variabel hasil
    printf("hasil = %d (nilai disimpan)\n", hasil);
    
    return 0;
}