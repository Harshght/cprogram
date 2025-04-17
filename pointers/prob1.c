#include<stdio.h>

int returning(int* ptr){
    printf("the value at ptr is %p", ptr);
 printf("the value at ptr is %d", *ptr);
}


int main(){
    
    int i = 5;
    int* ptr = &i;
    printf("The adress of i is %p\n", &i);
    returning(ptr);

return 0;
}