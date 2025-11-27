#include<stdio.h>
int find(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return a[i];
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=find(a,n);
    printf("Majority Element: %d",ans);
}
