#include "header.h"

typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

complex_t sum(complex_t c1, complex_t c2);
complex_t difference(complex_t c1, complex_t c2);
complex_t product(complex_t c1, complex_t c2);
complex_t division(complex_t c1, complex_t c2);

int main(){
    complex_t a, b, result;
    a.real = 2;
    a.imaginary = 5;
    b.real = 3;
    b.imaginary = 4;
    result = sum(a,b);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imaginary);
    result = difference(a,b);
    printf("Difference = %.1f + %.1fi\n", result.real, result.imaginary);
    result = product(a,b);
    printf("Product = %.1f + %.1fi\n", result.real, result.imaginary);
    result = division(a,b);
    printf("Division = %.1f + %.1fi\n", result.real, result.imaginary);
    return 0;
}

complex_t sum(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

complex_t difference(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real - c2.real;
    temp.imaginary = c1.imaginary - c2.imaginary;
    return temp;
}

complex_t product(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real * c2.real;
    temp.imaginary = c1.imaginary * c2.imaginary;
    return temp;
}

complex_t division(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real / c2.real;
    temp.imaginary = c1.imaginary / c2.imaginary;
    return temp;
}