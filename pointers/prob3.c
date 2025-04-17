#include<stdio.h>

int changethirty(int *a){
    *a = *a * 30;
    return *a;
}
int main(){
    
    int x = 45;
    printf("Before changing: %d\n", x);
    changethirty(&x);
    printf("After changing: %d\n", x);
return 0;
}