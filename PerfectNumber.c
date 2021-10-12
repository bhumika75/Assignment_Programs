#include<stdio.h>
#include<conio.h>
void main()
{
		int num,i,j,sum;
		printf("Enter Number:");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			sum=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					sum=sum+j;
				}
		    }
			if(sum==i)
			{
				printf("%d,",i);
			}
			
		}
		getch();
}
