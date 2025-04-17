// write a program for armstrong number

#include<stdio.h>


int main(){
int num;

printf("Enter a number: ");

scanf("%d",&num);

int copy=num;
int r;
int ans=0;
while(num!= 0){
    r=num%10;
    ans=(r*r*r)+ans;
    num=num/10;
}
if(copy==ans){
    printf("The number is an armstrong number %d",ans);
}

else{
    printf("The number is not an armstrong number %d",ans);
}

return 0;
}