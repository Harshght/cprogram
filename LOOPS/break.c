// #include<stdio.h>
// int main(){
//     for(int i=0; i<10; i++){
//         if(i==2){
//             break; //exit loop now
//         }
//           printf("HARSH\n");
       
         
//     }

    
// return 0;
// }

#include<stdio.h>
int main(){
    for(int i= 0 ;  i<6; i++){
        if(i==2){
            continue; // skip the current iteration
        }
        printf("HARSH %d\n",i);
    }
return 0;
}