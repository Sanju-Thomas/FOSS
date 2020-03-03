#include<stdio.h>
int rev(int n)
{
	static int r=0;
	if(n!=0)
		{	
			r=r*10+n%10;
			rev(n/10);
		}
	return r;
}
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("Reverse of %d is %d \n",n,rev(n));
	return 0;
}
