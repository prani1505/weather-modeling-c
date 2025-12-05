#include <stdio.h>

int main() {
    double a, b, c, x;
    FILE *f = fopen("input2.txt", "r");

    if (f == NULL) {
        printf("Error: cannot open input2.txt\n");
        return 1;
    }

    while (fscanf(f, "%lf %lf %lf %lf", &a, &b, &c, &x) == 4) {
        double T = a*x*x + b*x + c;
        printf("a=%.2f b=%.2f c=%.2f x=%.2f  --> Temp=%.2f\n", a, b, c, x, T);
    }

    fclose(f);
    return 0;
}
