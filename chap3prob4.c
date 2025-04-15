#include<stdio.h>
int main(){
    float x, y, z, k;
    x = 2; y = 3; z = 3; k = 1;
    //printf("%f", x + y * z / k); // Output: 8
    float i = 3*x/y-z+k;
    printf("%f", i); // Output: 3.000000
return 0;
}