#include<stdio.h>

void swap (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    
    int a = 5, b = 10;
    swap (&a, &b);
    printf("after swapping: a = %d, b = %d\n", a, b);
return 0;
}