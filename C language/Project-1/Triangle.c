#include<stdio.h>

int main()

{
    float firstAngle,secondAngle,thirdAngle;

    firstAngle=65;
    secondAngle=45;

    thirdAngle = 180-(secondAngle+firstAngle);

    printf("ThirdAngle: %f", thirdAngle);

    return 0;

}