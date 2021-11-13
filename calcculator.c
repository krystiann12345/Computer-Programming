#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, res;
    printf("Enter two Integers: ");
    scanf("%d%d", &num1, &num2);

    res = num1+num2;
    printf("\nAdd = %d", res);

    res = num1*num2;
    printf("\nMul = %d", res);

    res = num1/num2;
    printf("\nDiv = %d", res);

    res = num1-num2;
    printf("\nSub = %d", res);

    getch();
    return 0;
}
