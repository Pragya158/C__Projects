#include <stdio.h>
int main()
{
    int num1, num2;
    int result, choice;

    do
    {
        printf("\n------------ SAMPLE CALCULATOR -------------\n\n");

        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n\n");

        printf("Enter Your Choice (1-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case 2:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case 3:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        case 4:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &num1, &num2);

            if (num2 == 0)
            {
                printf("Error! Division by zero is not possible.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result = %d\n", result);
            }
            break;

        case 5:
            printf("\nThank You! Calculator Closed.\n");
            break;

        default:
            printf("\nInvalid Choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}