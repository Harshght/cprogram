#include<stdio.h>
int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("i = %d\n", i);
    printf("j = %p\n", j);
    printf("k = %p\n", k);
    printf("*j = %d\n", *j);
    printf("**k = %d\n", **k);
    
    printf("the value of i = %d\n", *(&i));
    printf("the value of i = %p\n", *(&j));
return 0;
}