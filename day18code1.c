#include<Stdio.h>

int main()
{
	int num;
	printf("Enter a Number:");
	scanf("%d",&num);
	
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
