#include <stdio.h>

int main()
{
    int size=100;
    int num,num1,num2,digit[size],n,sum=0;
    printf("Enter the number to checked : "); //ARMSTRONG NUMBER IS A NUMBER IN WHICH THE NUMBER IS SUM OF CUBE OF ITS DIGITS
    scanf ("%d",&num);
    size=0;
    num2=num;
    num1=num;
    while (num1>0) {
        num2=num1%10;
        num1=num1/10;
        digit[size]=num2;
        size++;
        }
    for (n=0;n<size;n++) {
         sum=sum+(digit[n]*digit[n]*digit[n]);
    }
    if (sum==num) {
        printf ("%d is Armstrong Number",num);
    }
    else {
        printf ("%d is not Armstrong Number",num);
    }
    return 0;
}
