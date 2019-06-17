https://github.com/mklkumar4/C-programming#include<stdio.h>
void main()
{
        int i,num,p=0;
        printf("Enter the number: ");
        scanf("%d",&num);

        for(i=1;i<=num/2;i++)
                {
                if(num%i==0)

                {
                        p++;
                }

                }
        if(p==1)
        {
        printf("%d is prime\n",num);
        }
        else
        {
        printf("%d is not prime\n ",num);
        }

}

