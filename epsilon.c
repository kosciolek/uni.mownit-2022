#include <stdio.h>

int is_larger_than_epsilon(double maybe_epsilon) {
    return maybe_epsilon + 1 > 1;
}

double find_epsilon_with_double() {
    double e = 0;
    double prev_e = 1;
    double mid = 0;

    const int iterations = 100000;
    for (int i = 0; i < iterations; i++) {
        mid = e + (prev_e - e) / 2.0;
        if(is_larger_than_epsilon(mid)) 
            prev_e = mid;
        else e = mid;
    }
    
    return prev_e;
}

int main() {
   const int n = 500000;
   printf("Epsilon is: %e\n", find_epsilon_with_double());
   return 0;
}