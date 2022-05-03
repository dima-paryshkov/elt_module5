#include <stdio.h>

extern double thirdPower(double n);

extern double fourthPower(double n);

int main()
{
    int option;
    double n = 0;
    while (1)
    {
        printf("\n  1. Raising a number to the 3rd power.\n ");
        printf(" 2. Raising a number to the 4th power.\n ");
        printf(" 3. Exit\n ");
        scanf("%d", &option);

        switch (option)
        {
        case 1: 
            printf("Enter number: \n ");
            scanf("%lf", &n);
            printf("%lf**3 = %lf", n, thirdPower(n));
            break;

        case 2: 
            printf("Enter number: \n ");
            scanf("%lf", &n);
            printf("%lf**4 = %lf", n, fourthPower(n));
            break;

        case 3:
            return 0;
            break;

        default:
            printf("Uncorrect point of menu. Try again\n ");
            break;
        }
    }

    return 0;
}