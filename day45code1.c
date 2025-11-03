#include<stdio.h>
int main(){
    char str[1000],ch;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&ch);
    int i, count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
