#include<stdio.h>
int max(int a[],int n,int k)
{
    if(k>n)
    {
        printf("ERROR");
        return -1;
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    int max_sum=sum;
    for(int i=k;i<n;i++)
    {
        sum+=a[i]-a[i-k];
        if(sum>max_sum)
        {
            max_sum=sum;
        }
    }
    return max_sum;
}
int main(){
    int a[]={2,1,5,1,3,2};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    int ans=max(a,n,k);
    if (ans!=-1)
    {
        printf("Maximum sum: %d",ans);
    }
}
