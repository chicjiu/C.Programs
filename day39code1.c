#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number of rows:");
	scanf("%d",&x);
	
	printf("Enter number of columns:");
	scanf("%d",&y);
	
	int matrix[x][y],i,j;
	printf("Enter Elements:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int diff=1,n=0;
	if(x>y)
	{
		n=y;
	}
	else
	{
		n=x;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(matrix[i][i]==matrix[j][j])
			{
				diff=0;
				break;
			}
		}
		if(diff==0) break;
	}
	if (diff==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
