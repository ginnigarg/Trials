#include<stdio.h>
int sumofdigits(int n)
{
    int sum=0;
    while (n)
    {
        int x=n%10;
        sum+=x;
        n/=10;
    }
    return sum;
}
int main()
{
    int num;
    scanf ("%d",&num);
    while (num>=10)
    {
        num=sumofdigits(num);
    }
    printf ("%d\n",num);
}
