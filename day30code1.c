#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i,cnte=0,cnto=0;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i=0;i<n;i++)
    {
        if (num[i]>0)
		{
		if(num[i]%2==0)
        {
        	cnte=cnte+1;
		}
		else
		{
			cnto=cnto+1;
		}
	}
    }

    printf("Count of even Number is: %d\nCount of odd Number is: %d", cnte,cnto);

    return 0;
}
