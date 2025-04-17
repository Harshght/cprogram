// Find the maximum value out of all elements in the array

// #include<stdio.h>

// int main() {
//     int arr[] = {5, 10, 15, 20, 25};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int max = arr[0];

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     printf("Maximum value in the array is %d", max);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[7]= {9,1,2,3,4,5,6};
//     int max = -1;
//     for(int i=0; i<=6; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
        
//     }
//     printf("%d ", max);
// return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7]= {9,1,2,3,4,5,6};
//     int max = INT_MIN;
//     for(int i=0; i<=6; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
        
//     }
//     printf("%d ", max);
// return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]= {9,1,2,3,4,5,6};
    int min = INT_MAX;
    for(int i=0; i<=6; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        
    }
    printf("%d ", min);
return 0;
}