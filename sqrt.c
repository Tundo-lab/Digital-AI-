#include <stdio.h>
#include <math.h>

void solveQuadratic(float a, float b, float c)
{
    float d, x1, x2, realPart, imagPart;

    if (a == 0)
    {
        printf("Error: This is not a quadratic equation.\n");
        return;
    }

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real and distinct roots:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        printf("Two equal roots:\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Complex roots:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}

int main()
{
    float a, b, c;

    printf("Enter coefficients (a b c): ");

    // Error handling for missing values or wrong data type
    if (scanf("%f %f %f", &a, &b, &c) != 3)
    {
        printf("Error: Invalid input. Please enter exactly three numeric values.\n");
        return 1;
    }

    solveQuadratic(a, b, c);

    return 0;
}