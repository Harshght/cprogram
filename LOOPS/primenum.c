// check if the number is prime number

#include<stdio.h>
int main(){
    
  int n = 5;
  int prime = 0;
  for(int i=1; i<n; i++){
    if(n%i == 0){
        prime = 1;
    }
      printf("the number %d is prime", n);
  }

  

  
return 0;
}