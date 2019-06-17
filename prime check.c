#include<stdio.h>
void main()
{
	int i,num,p=0;
	printf("enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			p++;
		}

	}
	if(p==2)
	{
	printf("this is a prime number");
	}
	else
	{
	printf("it's not a prime number");
	}
}



	
