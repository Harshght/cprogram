#include<stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    switch (a){
        case 1:
            printf("one");
            //break;
        case 2:
            printf("two");
            //break;
        default:
            printf("\n other");
            break;
    }
    
return 0;
}