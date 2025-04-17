#include<stdio.h>

int factorial(int);

int factorial(int d){
    if (d == 1 || d == 0)
    {
        /* code */
        return 1;
    }
    
     return factorial(d-1)*d;
}
int main(){

    int a = 9;
    printf("the factorial of %d is %d",a,factorial(a));
return 0;
}