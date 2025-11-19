#include <stdio.h>

int main()
{
    int a, b;
    char oparetion;

    printf("Enter first value :\n");
    scanf("%d", &a);

    printf("Enter secoond value :\n");
    scanf("%d", &b);

    printf("choose oparetion :");
    scanf(" %c", &oparetion);

    switch (oparetion)

    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;

    default:
        printf("invalid choise");
    }
    return 0;
}
