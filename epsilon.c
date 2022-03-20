#include <stdio.h>

double find_epsilon_with_double() {
    double e = 0;
    double prev_e = 1;
    double mid = 0;

    const int iterations = 100000;
    for (int i = 0; i < iterations; i++) {
        mid = e + (prev_e - e) / 2.0;
        if (mid + 1 > 1) 
            prev_e = mid;
        else e = mid;
    }
    
    return prev_e;
}

int main() {
   const int n = 500000;
   const double epsilon = find_epsilon_with_double();
   printf("Epsilon is: %e\n", epsilon);
   return 0;
}