//
// Created by harsh on 4/7/2025.
//

#include<stdio.h>

int main() {
  int arr[7]={1,2,3,4,5,6,7};
  for(int i=0;i<=6;i++)
    if(arr[i]%2!=0)
      arr[i]=arr[i]*2;
    
    else
      arr[i]=arr[i]+10;
  
    for(int i=0;i<=6;i++)
     printf("%d\n",arr[i]);

}