#include <stdio.h>

int main() {
    int m, n;
    int i,j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   printf("The Matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
