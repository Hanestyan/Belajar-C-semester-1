#include <stdio.h>

float f_to_i(float f) { return f * 12; }
float i_to_cm(float i) { return i * 2.54; }
float c_to_m(float c) { return c / 100; }

int main() {
    float feet;
    
    printf("Ukuran (feet): ");
    scanf("%f", &feet);
    
    printf("Hasil: %g meter\n", c_to_m(i_to_cm(f_to_i(feet))));
    
    return 0;
}