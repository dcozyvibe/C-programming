#include<stdio.h>
void berth(int s)
{	if(s>0 && s<73)
		if(s % 8 == 1 || s % 8 == 4)
			printf("this is lower Birth\n");

		else if(s % 8 == 2 || s % 8 == 5)
			printf("this is middle birth\n");
	
		else if(s % 8 == 3 || s % 8 == 6)
			printf("this is upper birth\n");
	
		else if(s % 8 == 7)
			printf("this is side lower birth\n");
	
		else 
		 	printf("this is side upper birth\n");
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



