#include<stdio.h>
int main()
{
	int n,f1=0,f2=0,f3=0;
	int check1(int n,int *f1,int *f2,int *f3);
	printf("\nEnter The Number");
	scanf("%d",&n);
	check1(n,&f1,&f2,&f3);
	if(f1==1)
	printf("\nNumber Is Even");
	if(f2==1)
	printf("\nNumber Is Prime");
	if(f3==1)
	printf("\nNumber IsDivisible By 3 and 7");
}
int check1(int n,int *f1,int *f2,int *f3)
{
	int i;
	if(n%2==0)
	{
	*f1=1;
	}
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			break;
		}
		if(i==n)
		{
			*f2=1;
		}
			if((n%3==0)||(n%7==0))
			{
			*f3=1;
			}
}
