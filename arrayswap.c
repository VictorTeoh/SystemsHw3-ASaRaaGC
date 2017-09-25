#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr1[10];
int arr2[10];
int i;
int *p;

int main(){
    srand( time(NULL) );

    //Populate arr1
    for(i = 0; i<10; i++){
         arr1[i] = rand();
    }
    
    //Print out indices of arr1
    printf("Arr1 \n");
    for(i = 0; i<10; i++){
         printf("In index is %d %d \n",i,arr1[i]);
    }

    //Populate arr2 with pointers with values of arr 1 reversed
    for(i = 0; i<10; i++){
         p = &arr1[9-i];
         arr2[i] = *p;

    }

    //Print out indices of arr1
    printf("\nArr2 \n");
    for(i = 0; i<10; i++){
         printf("In index is %d %d \n",i,arr2[i]);
    }
}
