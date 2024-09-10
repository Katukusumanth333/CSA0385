#include<stdio.h>
int main()
{
	int n,f1=1,f2=0,f3=1;
	printf("enter the range :");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("%d",f3);
	}
	return 0;
}
