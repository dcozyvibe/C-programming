#include<stdio.h>
void berth(int s)
{	if(s>0 && s<109)
		{if(s % 6 == 1 || s % 6 ==0)
		
			printf("%d is WS\n",s);
		else if(s % 6 == 2 || s % 6 == 5)
			printf("%d is MS\n",s);
	
		else if(s % 6 == 3 || s % 6 == 4)
			printf("%d is AS\n",s);
		}
	else
		printf("Invalid Input");
}

int main()
{
	int a;
	printf("enter the seat number: ");
	scanf("%d",&a);
	berth(a);
	return 0;
}



