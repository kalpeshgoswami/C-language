#include <stdio.h>

int main()

{
    int marks;

    printf("Enter your marks: ");

    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your grade :A.\nExcellent work!");
    }
    else if (marks >= 70)
    {
        printf("Your grade :B. \nWell Done");
    }
    else if (marks >= 50)
    {
        printf("Your grade :C.\nGood job");
    }
    else if (marks >= 30)
    {
        printf("Your grade :D. \nYou are passed, but you could do better");
    }
    else
    {
        printf("Your grade :F.\nSoory,you are failed");
    }

    return 0;
}