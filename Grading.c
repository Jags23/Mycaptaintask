#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks obtained : \n");
	scanf("%d",&marks);//marks should range from 0 to 100.
	if (marks>=85&&marks<=100)
	{
		printf("you have aquired 'Grade A'\n");
	}
	else if(marks>=70&&marks<=84){
		printf("you have aquired 'Grade B'\n");
	}
		else if(marks>=55&&marks<=69){
		printf("you have aquired 'Grade C'\n");
	}
		else if(marks>=40&&marks<=54){
		printf("you have aquired 'Grade D'\n");
	}
		else if(marks<=39){
		printf("you have aquired 'Grade F'\n"); //the distribution of marks has been done based on the given question
	}
	            
}  // done By Jagadeep T
  
