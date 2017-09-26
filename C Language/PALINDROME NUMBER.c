#include <stdio.h>
int main()
{
    int num,size=10;
    printf ("Enter the number : ");//Palindrome Number
    scanf ("%d",&num);
    int digits[size],n,num1=num;
    for (n=0;num1>0;n++) {
        digits[n]=num1%10;
        num1=num1/10;
        }
    size=n;
    for (n=0;n<size/2;n++) {
        if (digits[n]==digits[size-n-1]) {
            continue;
        }
        else {
            break;
        }
    }
    if (n==(size/2)-1) {
        printf ("%d is palindrome",num);
    }
    else {
        printf ("%d is not palindrome",num);
    }


    return 0;
}
