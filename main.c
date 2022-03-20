#include <stdio.h>

float x_with_float(int n) {
    float acc = 0.01f;
    for (int i = 0; i < n; i++)
        acc = acc + 3.0f * acc * (1.0f - acc);
    return acc;
}

double x_with_double(int n) {
    double acc = 0.01;
    for (int i = 0; i < n; i++)
        acc = acc + 3.0 * acc * (1.0 - acc);
    return acc;
}

float x_alternate_with_float(int n) {
    float acc = 0.01f;
    for (int i = 0; i < n; i++)
        acc = 4.0f * acc - 3.0f * acc * acc;
    return acc;
}

double x_alternate_with_double(int n) {
    double acc = 0.01;
    for (int i = 0; i < n; i++)
        acc = 4.0 * acc - 3.0 * acc * acc;
    return acc;
}


int main() {
   const int n = 500000;
   printf("x{n} + 3.0 * x{n} * (1 - x{n}) | n = %d | float:%f double:%f\n", n, x_with_float(n), x_with_double(n));
   printf("4.0 * x{n} - 3.0 * x{n} * x{n} | n = %d | float:%f double:%f\n", n, x_alternate_with_float(n), x_alternate_with_double(n));
   return 0;
}