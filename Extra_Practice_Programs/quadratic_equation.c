// Equation of the form : ax^2 + bx + c = 0. It is known as the quadratic equation. The values of x that satisfy the equation are known as the "roots" of the equation. A quadratic equation has two roots :
// root1 = -b + sqrt(b^2 - 4ac)/2a;
// root2 = -b - sqrt(b^2 -4ac)/2a;
// This program is also going to evaluate these roots... here the user has to enter the values of a,b and c and outputs the root1 and root2.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, eq1, root1, root2;
    printf("Enter the values of a, b, and c\n");
    scanf("%f %f %f", &a, &b, &c);
    eq1 = b * b - 4 * a * c;
    if (eq1 < 0)
    {
        printf("\n\nROOTS ARE IMAGINARY");
    }
    else
    {
        root1 = (-b + sqrt(eq1)) / (2.0 * a);
        root2 = (-b - sqrt(eq1)) / (2.0 * a);
        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1, root2);
    }
    return 0;
}