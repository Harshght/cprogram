//  #include<stdio.h>
// int main(){
//     int arr[5]={2,4,3,2,1};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
    
// return 0;
// }

//by taking input from user
#include<stdio.h>
int main(){
    int arr[5];//={2,4,3,2,1};

     for (int i = 0; i <= 4; i++)
     {
         printf("enter the elements of arr %d\n",i);
         scanf("%d",&arr[i]);
     }
     printf("%d\n",arr[1]);
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    
return 0;
}