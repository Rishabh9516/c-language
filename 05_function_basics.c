#include<stdio.h>
void display();

int main(){
    printf("initializing the display\n");
    display();
    printf("thr display has finished his work\n");
    return 0;

}
void display(){
    printf("this is the display\n");
}