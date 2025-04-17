#include<stdio.h>

// function prototype

int sum(int,int);

// function defination

int sum(int a, int b){
    printf("%d",a+b);
}
 

int main(){
    
int a=4;
int b=3;

sum(a,b);

return 0;
}