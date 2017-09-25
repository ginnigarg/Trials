#include <stdio.h>
int main()
{
    int num,a,div=0;
    printf("Enter the number to checked : "); //PERFECT NUMBER IS A NUMBER IN SUM OF DIVISORS IS THE NUMBER ITSELF
    scanf ("%d",&num);
    for (a=1;a<num;a++) {
        if (num%a==0) {
          div=div+a;
        }
    }
    if (div==num||num==1) {
        printf ("%d is a perfect number",num);
    }
    else {
        printf ("%d is not a perfect number",num);
    }
    return 0;
}
