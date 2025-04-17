// #include<stdio.h>
// void func(int arr[]){
//     arr[0] = 7;
//     return;
// }
// int main(){
//      int arr[5]= {1,2,3,4,5};
//      printf("%d\n",arr[0]);
//      func(arr);
//      printf("%d",arr[0]);
    

// return 0;
// }

#include<stdio.h>

void fun(int x[]){
    int temp = x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int arr[2]={2,4};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
return 0;
}