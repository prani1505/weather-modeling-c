#include <stdio.h>

int main() {
    double a = 1.0, b = 2.0, c = 3.0;
    double x = 4.0;

    double T = a*x*x + b*x + c;

    printf("Predicted Temperature = %.2f\n", T);
    return 0;
}
