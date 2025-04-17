#include<stdio.h>

// function prototype

int change(int a);

int change(int a){
    a = 77; //misnomer
    return 0;
}

 

int main(){
    

int b=3;
change(b);
printf("b is %d",b);


return 0;
}