#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,j=0,arr[100];
	while (j<100)
	{
		arr[j]=pow(5,i++);
		int a=j,k;
		j++;
		for (k=0;k<a;k++)
		{
			arr[j++]=arr[a]+arr[k];
		}
	}
	for (i=0;i<100;i++)
	{
		printf ("%d\n",arr[i]);
	}
	
}
