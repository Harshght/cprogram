//wap to find student has passed or not in exam with certain condition min 40% req all subject and 
//33% min in all subjects

#include<stdio.h>
int main(){
    int eng;
    int math;
    int sci;
    int total;
    int max = 300;
    
    printf("enter eng marks %d\n");
    scanf("%d",&eng);
    printf("enter math marks %d\n");
    scanf("%d",&math);
    printf("enter sci marks %d\n ");
    scanf("%d",&sci);
    total = eng + math + sci;
   
        if(total >= 40/100*max && (eng >= 33 && math >= 33 && sci >= 33)){
            printf("student passed with min 40% in all subjects\n");
        }
        else{
            printf("student failed\n");
        }
    
    
return 0;
}