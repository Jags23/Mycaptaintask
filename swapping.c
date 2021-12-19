#include<stdio.h>
int main()
{
	int a=25,b=15;
	printf("The numbers before swapping are a:%d and b:%d\n",a,b);
	a=a+b;//25+15=40
	b=a-b;//40-15=25
	a=a-b;//40-25=15
	printf("The numbers after swapping are a:%d and b:%d\n",a,b);
	printf("Temporary variable has not been used\n");    //This is done by Jagadeep T
	return 0;
	}
