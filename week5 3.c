#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    float d, root1, root2, realPart, imagPart;

    printf("Enter a, b and c of quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    // Case 1: Complex and distinct roots
    if (d < 0) 
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex numbers.\n");
        printf("Roots of quadratic equation are: %.3f + %.3fi", realPart, imagPart);
        printf(" and %.3f - %.3fi\n", realPart, imagPart);
    }
    // Case 2: Real and equal roots
    else if (d == 0) 
    {
        printf("Both roots are equal.\n");
        root1 = -b / (2 * a);
        printf("Root of quadratic equation is: %.3f\n", root1);
    }
    // Case 3: Real and distinct roots (Cut off in the image)
    else 
    {
        printf("Roots are real and distinct.\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are: %.3f and %.3f\n", root1, root2);
    }

    return 0;
}
