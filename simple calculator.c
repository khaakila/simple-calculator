/*
simple calculator
by khaakila situma
feb 2022
MIT license
c98 compliler
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable declaration
    int num1,num2,sum,diff,product;
    float quotient;
    printf("simple calcultor");
    //capture inputs
    printf("enter two values:");
    scanf("%d%d,&num1,&num2");
    //computations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1/num2;
    return 0;
}
