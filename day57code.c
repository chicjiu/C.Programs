#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Previous greater Element: \n");
    for(i=0;i<n;i++)
    {
        int p=-1;
        for(j=i+1;j<n;j--)
        {
            if(arr[j]>arr[i])
            {
                p=arr[j];
                break;
            }
        }
        printf("%d",p);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf("\n");
}
