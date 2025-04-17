#include<stdio.h>
int main(){
    int arr[5]={4,5,8,7,2};
    int cout =0;
    int x = 17;
    for (int i = 0; i <=4; i++)
    {
        for (int j = i+1; i <=4; i++)
        {
           for (int k = j+1; i <=4; i++)
           {
            if(arr[i]+arr[j]+arr[k]==x){
                cout = cout+1 ;
            }
           }
           
        }
        
    }
    printf("%d",cout);
return 0;
}