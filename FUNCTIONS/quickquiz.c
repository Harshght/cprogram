#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();

//function defination

void good_morning(){
    printf("good morning");
}
void good_afternoon(){
    printf("good afternoon\n");
}

void good_night(){
    printf("good night\n");
}

int main(){
    good_afternoon();
    good_morning();
return 0;
}