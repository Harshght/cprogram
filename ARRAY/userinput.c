#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        printf("Enter the element at index %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= n-1; i++)
    {
        printf("%d\n ",arr[i]);
    }
    
    
   
return 0;
}