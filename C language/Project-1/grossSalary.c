#include<stdio.h>

int main()

{

    float  basicSalary,grossSalary,DA,TA,HRA;
    float daAmount,taAmount,hraAmount;

    DA=5;
    TA=8;
    HRA=10;

    basicSalary =100;

    daAmount = (basicSalary*DA)/100;

    taAmount = (basicSalary*TA)/100;

    hraAmount = (basicSalary*HRA)/100;

    printf("%f",daAmount);


    grossSalary = basicSalary + daAmount + taAmount +hraAmount;

    printf("Gross Salary:%.2f",grossSalary);


    return 0;



}