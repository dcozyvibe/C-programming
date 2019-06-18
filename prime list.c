#include<stdio.h>
int main()
{
        int j,i,num,p;
        printf("Enter the number: ");
        scanf("%d",&num);
	printf("series:");
	for (j=1;j<=num;j++)
{
		p=0;
        for(i=1;i<=num;i++)
                {
                if(j%i==0)
                {
                        p++;
                }

 
               }
        if(p==2)
        {
        printf("%d\n" ,j);
        }
  }
  return 0;
}
