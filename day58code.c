#include<stdio.h>
#include<stdlib.h>
void product(int n,int a[],int ans[])
{
    int prefix[n],suffix[n];
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*a[i-1];
    }
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*a[i+1];
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=prefix[i]*suffix[i];
    }
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int ans[n];
    product(n,a,ans);
    for(int i=0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }
    printf("\n");
}
