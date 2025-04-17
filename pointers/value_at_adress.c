// in pointerss * denotes value at variable adress

#include<stdio.h>
int main(){
    
    int i = 10;
    

    
    int *j = &i;  // this j stores the value at variable i
    // int j = &i; == int *j = &i;  are same thing
    
    // *(&i) = 10; by definition star denotes the value at adress i


     // changing value at adress stored in j // *j is a pointer
    // *j stores the value of variable i
    printf("value at variable i = %d\n", i);
    printf("value at pointer j = %d\n", *j); // print the value of at variable i
    
    printf("address of variable i = %p\n", &i);
    
    printf("the adress of pointer j = %p\n",*(&j));

    printf("");

  // printf("value at pointer j = %p\n", j);



return 0;
}