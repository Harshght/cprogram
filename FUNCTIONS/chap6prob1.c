#include<stdio.h>

int average(int,int,int);

int average(int x,int y,int z){
    printf("the average of given no is %d",(x+y+z)/3);
    return 0;
}
int main(){
    int a = 6;
    int b = 2;
    int c = 4;

    average(a,b,c);
return 0;
}