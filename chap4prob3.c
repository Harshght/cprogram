#include<stdio.h>
int main(){
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);
  if(salary < 250000){
    printf("Your salary is taxx free.\n");
  }
  else if(salary >= 250000 && salary <= 500000){
    printf("your salary after tax deduction is %d.\n", salary-salary*5/100);
  }
  else if(salary > 500000 && salary <=1000000){
    printf("Your salary after tax deduction is %d.\n", salary-salary*20/100);
  }
  else{
    printf("Your salary after tax deduction is %d.\n", salary-salary*30/100);
  }
return 0;
}