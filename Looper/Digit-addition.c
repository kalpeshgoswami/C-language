#include <stdio.h>

int main()
{

    int num,firstDigit,lastDigit,sum;

    printf("Enter any number :");
    scanf("%d", &num);

    lastDigit = num % 10;          //getting last digit

    while(num >= 10)               //loop to remove last digit until only first digit remains
    {
        num = num / 10;
    }

    firstDigit = num;              //first digit of the number

    sum = firstDigit + lastDigit;  //sum of first and last digit

    printf("Sum of first and last digit of the number: %d\n", sum);

        return 0;
}