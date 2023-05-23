#include<stdio.h>

int main(){
    int marks;

    printf("enter your marks");
    scanf("%d",&marks);
if (marks>=90){
    printf("your grade is A\n");

}
    else if((marks>=80)|| marks==90){
        printf("your grade is B \n");

    }
else if((marks>=70)||marks==79){
    printf("your grade is C\n");

}
else if((marks>=60)||marks==69){
    printf("your grade is D\n");
}
else {
    printf("your grade is E, you are fail bc\n");
}
return 0;
    }
 
