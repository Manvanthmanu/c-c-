#include <stdio.h>

// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively


int main(){


    int table[3][10];
    int*ptr1 = &table[0][0];
    int*ptr2 = &table[1][0];
    int*ptr3 = &table[2][0];

    for(int i = 1;i<=10;i++){
        *ptr1 = 2*i;
        *ptr2 = 7*i;
        *ptr3 = 9*i;
        ptr1++;
        ptr2++;
        ptr3++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("%d ",table[j][i]);
        }
        printf("\n");
    }

    return 0; 
}