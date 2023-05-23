#include<stdio.h>

int main(){
    int n;
    printf("enter the number %d\n",n);
    scanf("%d",&n);
    do{
        printf("the first n natral no. is  %d\n",n+1);
        n++;
    } while(n<20);
    return 0;
}