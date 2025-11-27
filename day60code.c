#include<stdio.h>
void max(int a[],int n,int k)
{
    if(k>n)
    {
        printf("Invalid");
        return;
    }
    for(int i=0;i<=n-k;i++)
    {
        int max=a[i];
        for(int j=i+1;j<i+k;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        printf("%d ",max);
    }
    printf("\n");
}
int main(){
    int a[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    max(a,n,k);
}
