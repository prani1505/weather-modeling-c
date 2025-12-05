#include <stdio.h>

int main() {
    double a, b, c, x;
    FILE *f = fopen("input.txt", "r");

    if (f == NULL) {
        printf("Error: cannot open input.txt\n");
        return 1;
    }

    fscanf(f, "%lf %lf %lf %lf", &a, &b, &c, &x);
    fclose(f);

    double T = a*x*x + b*x + c;

    printf("Predicted Temperature = %.2f\n", T);
    return 0;
}
