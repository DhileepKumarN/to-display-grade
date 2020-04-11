#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks out of 100 : \n");
	scanf("%d",&marks);
	if(marks>84)
	printf("Grade A\n");
	else if(marks>69)
	printf("Grade B\n");
	else if(marks>54)
	printf("Grade C\n");
	else if(marks>39)
	printf("Grade D\n");
	else
	printf("Grade F\n");
	return 0;
	}
