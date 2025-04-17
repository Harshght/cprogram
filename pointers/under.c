//dekho samjho pahle okk

// agar 

#include<stdio.h>
int main(){
    int a = 6;
    printf("the adress of a is %p\n", &a); // &a = adress of variable a
   // to store adress of variable we use pointers
  // decleartion of pointers
    int *ptr; // ptr is a pointer variable that can store adress of integer
       // int* ptr == int *ptr
    ptr = &a; // assigning adress of a to ptr
    printf("the value of a is %d\n", a);
    printf("the adress of a is %p\n", ptr); // %p = pointer adress format
    printf("the value of a through pointer is %d\n", *ptr); // *ptr = value of a
    // we can change value of a using pointer
             // *ptr = 10; //
    printf("the value of a is now %d\n", a);
    // we can also print the adress of pointer
    printf("the adress of ptr is %p\n", &ptr);
     // *(&a) = 6
     // *(&j) = 87994 



    
    // we can change the adress of pointer using another pointer
    
    int *ptr2 = &a;
    ptr = ptr2;
    printf("the value of a through pointer is now %d\n", *ptr); // *ptr = 10;
    printf("the adress of ptr is now %p\n", &ptr); // %p = pointer adress format
    printf("the value of a through pointer is now %d\n", *ptr); // *ptr = 10;
    // we can also print the adress of pointer
    printf("the adress of ptr is now %p\n", &ptr); // %p = pointer adress format
    // we can change the adress of pointer using another pointer
    ptr2 = ptr;
    ptr = ptr2;
    return 0;
}