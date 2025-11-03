#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    char result[100];
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            result[i]=str[i];
            printf(" %c", result[i]);
        }
    }
    return 0;
}
