#include <stdio.h>

int main() {
    double a, b, c, x;

    printf("Enter a b c x: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &x);

    double T = a*x*x + b*x + c;

    printf("Predicted Temperature = %.2f\n", T);
    return 0;
}
