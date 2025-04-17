#include<stdio.h>
#include<string.h>
int main(){
    char str[20];

    puts("enter a str");
    gets(str);
    puts(str);

    int size = 0;
    int k = 0;
    while (str[k]!='\0')
    {
     size++;
     k++;

    }
     for (int j = 0; j = size-1; k<=j, k++, j--)
     {
      char temp = str[k];
      str[k]=str[j];
      str[j]=temp;
     }
     
    
  // puts("\nhello everyone");
return 0;
}