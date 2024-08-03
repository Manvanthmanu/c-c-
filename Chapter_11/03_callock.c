#include <stdio.h>
#include<stdlib.h>

// Write a program to create an array of size n using calloc where n is an 
// integer entered by the user.


int main(){
    int n ;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));

    for(int i = 0;i<n;i++){
        ptr[i] = i;
    }

    for(int i = 0;i<n;i++){
        printf("%d\n" , ptr[i]);
    }
        free(ptr);
    
    return 0;
}