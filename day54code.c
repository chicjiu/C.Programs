#include<stdio.h>
int find(int n)
{
    int total=n*(n+1)/2;
    for(int x=1;x<=n;x++)
    {
        int left=x*(x+1)/2;
        if(left==total-left+x)
        {
            return x;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    int pivot=find(n);
    printf("Pivot integer: %d",pivot);
}
