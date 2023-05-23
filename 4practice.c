#include<stdio.h>

int main(){
    int principle, rate, time;
    printf("Enter principle amount");
    scanf("%d", &principle);
    printf("Enter rate");
    scanf("%d", & rate);
    printf("Enter time duration");
    scanf("%d", & time);
    int simpleintrest = (rate*time*principle)/100;
    printf("the value of simple intrest is%d", simpleintrest);
    return 0;


}