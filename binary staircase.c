#include<stdio.h>
int main()
{
	int i,j,a;
	printf("Enter the number of steps\n");
	scanf("%d",&a); 
	for(i=0;i<a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}
