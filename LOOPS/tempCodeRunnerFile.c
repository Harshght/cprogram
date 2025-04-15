#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=n; i; i--){
        printf("%d * %d = %d\n", n, i, n*i);
    }
return 0;
}