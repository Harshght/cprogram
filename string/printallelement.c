//  #include<stdio.h>
// int main(){
//     char arr[5]= {'H','A','R','S','H'};
//      for (int i = 0; i <=5; i++)
//     {
//          printf("%c",arr[i]);
//      }
    
//  return 0;
// }

#include<stdio.h>
int main(){
    char arr[]= {'d','H','A','R','S','H','\0'};
   // char ch = '\0';  //null character \0

    int i =0;
    while (arr[i]!='\0')

    {
        printf("%c",arr[i]);
        i++;
    }
    
return 0;
}