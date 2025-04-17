#include<stdio.h>
int main(){
    int marks[5]={30,35,37,32,44};
    
    // if (marks[0]<35||marks[1]<35)
    // {
    //     printf("First two students failed");
    // }

    // else
    // {
    //     printf("First two students passed");
    // }
    printf("%p\n",&marks[0]);
    printf("%p\n",&marks[1]);
    printf("%p\n",&marks[2]);
    printf("%p\n",&marks[3]);
    printf("%p\n",&marks[4]);
    printf("%p\n",&marks[5]);

    int sum = 0;
   
    for (int i = 0; i <= 4; i++)
    {
        sum = sum * marks[i]; // marks[i] denotes the index of array elements
    }
    
    printf("Sum of marks is %d\n",sum);
    
    
return 0;
}