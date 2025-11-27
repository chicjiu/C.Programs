//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include<stdio.h>
int main(){
    int m,n,i;
    printf("Enter size of the first array: ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter %d elements: ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of the second array: ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merged[m+n];
    int p=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[p]<arr2[j])
        {
            merged[k++]=arr1[p++];
        }
        else
        {
            merged[k++]=arr2[j++];
        }
    }
    while(p<m)
    {
        merged[k++]=arr1[p++];
    }
    while(j<n)
    {
        merged[k++]=arr2[j++];
    }
    for(int a=0;a<m+n;a++)
    {
        printf("%d ",merged[a]);
    }
    printf("\n");
}
