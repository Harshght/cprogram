// pointers

#include<stdio.h>
int main(){
    int i = 21;

    //    int *ptr = &i; // ptr is a pointer variable to store the address of i

    printf("Address of i: %p\n", &i); // print the address of i
    // &i denotes the address of the i variable
    // %p used for displaying the address value taken by &i
      
    int* j = &i; // pointer j is a pointer pointer to the address of  the i variable
    printf("Address of j: %p\n", j);
    return 0;
}