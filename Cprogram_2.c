#include<stdio.h>
main()
{
	printf("Enter your marks:");
	int n=0;
	scanf("%d",&n);
	
	if(n>=85 && n<=100)
	{
		printf("Grade A");
	}
	else if(n>=70 && n<=84)
	{
		printf("Grade B");
	}
	else if(n>=55 && n<=69)
	{
		printf("Grade C");	
	}
	else if(n>=40 && n<=54)
	{
		printf("Grade D");
	}
	else if(n<40)
	{
		printf("Grade F i.e you are FAIL ");
	}
	return 0;
	
}

