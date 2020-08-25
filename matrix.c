#include<stdio.h>
int main()
{
	int disp[3][3],rows,sum=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("input element in the matrix:\nelement:");
			scanf("%d",&disp[i][j]);
		}
	}

printf("3 dimentional Array element:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%d",disp[i][j]);
	if (j=3)
	{
		printf("\n");
	}
}
for (rows=0;rows<3;rows++)
{
	sum=sum+disp[rows][rows];
}
	printf("sum of diagonals:%d",sum);
	return 0;
}

