#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, disc, root1, root2, realPart, imagPart;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f", root1, root2);
    }
    else if (disc == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal: %.2f and %.2f", root1, root2);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("The roots are complex and conjugate: %.2f + %.2fi and %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}




