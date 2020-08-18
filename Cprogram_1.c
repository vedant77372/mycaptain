#include<stdio.h>
main()
{
	int a=20,b=30;//assign two no.
	printf("before swap a=%d, b=%d \n",a,b);
	a=a+b;//a=50
	b=a-b;//b=20
	a=a-b;//a=30
	printf("After swap a=%d, b=%d",a,b);
	return 0;
}
