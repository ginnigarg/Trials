#include <stdio.h>
#include<math.h>
int main()
{
    int num,a,flag=0;
    printf("Enter the number to be checked : "); //Prime Number
    scanf ("%d",&num);
    for (a=2;a<=sqrt(num);a++)
    {
        if (num%a==0)
        flag=1;
    }
    if (flag==0)
    printf ("%d is a prime number",num);
    else
    printf ("%d is not a prime number",num);
    return 0;
}
