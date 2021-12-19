#include<stdio.h>
int main()
{
	printf("Hey Byte ,This is for you. Pick a number from 1 to 5!\n"); 
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Food item-Rasa Malai\nPrice- Rs.70\n");
			break;
		case 2:
			printf("Food item-Chicken Briyani\nPrice- Rs.250\n");
			break;
		case 3:
			printf("Food item-Parotta\nPrice- Rs.25\n");
			break;
		case 4:
			printf("Food item-Full meals\nPrice- Rs.150\n");
			break;
		case 5:
			printf("Food item-Masala Dosa\nPrice- Rs.100\n");
			break;
		default:
			printf("Only enter numbers from 1 to 5 \n");
			break;
		
	}
}
