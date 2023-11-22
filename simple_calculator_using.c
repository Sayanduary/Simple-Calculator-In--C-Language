// C Prpgram to make a simple Calculator
// Using Switch Case
#include <stdio.h>

int main()
{
    char ch;
    double a, b;
    while (1)
    {
        printf("Enter an Operator(+,-,/,*,%),"
               "If You Want to Exit Press X: ");
        scanf("%c", &ch);
        // To Exit
        if (ch == "x")
            exit(0);
        printf("Enter two first and second operator: ");
        scanf("%lf %lf", &a, &b);
        // Using Switch Case we willl differtiate
        // Operations based on different operator
        switch (ch)
        {
            // For Addition
        case '+':
            printf("%.1lf+%.1lf= %.1lf\n", a, b, a + b);
            break;
            // For Subtraction
        case '-':
            printf("%.1lf-%.1lf= %.1lf\n", a, b, a - b);
            break;
            // For Division
        case '/':
            printf("%.1lf/%.1lf= %.1lf\n", a, b, a / b);
            break;
            // For Multiplication
        case '*':
            printf("%.1lf*%.1lf= %.1lf\n", a, b, a * b);
            break;
        default:
            printf("Error! Please Write Valid OPerator\n");
        }
        printf("\n");
    }
    return 0;
}