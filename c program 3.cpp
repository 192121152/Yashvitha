#include<stdio.h>
int main()
{
	int i,n,r,tv;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter tabular value:");
	scanf("%d",&tv);
	for(i=1;i<=n;i++)
	{
		r=i*tv;
		printf("\n%d*%d=%d",i,tv,r);
	}
}

