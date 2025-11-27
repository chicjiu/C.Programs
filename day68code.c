//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
    }
    int total=n*(n-1)/2;
    int missing=total=sum;
    printf("Missing: %d",missing);
}
