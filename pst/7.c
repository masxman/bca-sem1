#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <float.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if a is equal to 0
    if (a == 0) {
        printf("Invalid input: a cannot be equal to 0\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > DBL_EPSILON) {
        printf("\nRoots are real and different\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    // condition for real and equal roots
    else if (fabs(discriminant) <= DBL_EPSILON) {
        printf("\nRoots are real and equal\n");
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    // if roots are not real
    else {
        printf("\nRoots are not real\n");
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
