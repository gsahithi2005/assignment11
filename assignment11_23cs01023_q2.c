#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50
char* remov(char str[]);
int main(){
    char s[N]; char *r;
    printf("Enter the string: ");
    scanf("%s",s);
    r=remov(s);
    printf("\nString after removing duplicate characters: ");
    printf("%s",r);
    return 0;
}
char* remov(char str[]){
    int n=strlen(str);
    char* stack=malloc(n);
    int top=-1;
    for (int i=0;*(str+i)!='\0';i++){
        if (top==-1){
            stack[++top]=*(str+i);
        }
        else{
            if (stack[top]==*(str+i))
                top--;
            else
                stack[++top]=*(str+i);
        }
    }
    stack[++top]='\0';
    return (stack);
}