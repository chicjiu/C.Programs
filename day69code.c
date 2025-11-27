//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[n+1];
    for(i=0;i<n;i++)
    {
        f[i]=0;
    }
    int repeated=-1;
    for(i=0;i<n;i++)
    {
        if(f[a[i]]==1)
        {
            repeated=a[i];
            break;
        }
        f[a[i]]++;
    }
    printf("Repeated Element is: %d\n",repeated);
}
