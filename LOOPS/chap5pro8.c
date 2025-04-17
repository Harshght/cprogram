// first product of the n natural numbers or factorial

#include<stdio.h>
int main(){
    
    int product = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        product = product * i;
    }
    printf("The product of the first %d natural numbers is: %d", n, product);
return 0;
}