#include<stdio.h>

int main(){
    int n ;
    printf("Enter the Size of array ");
    scanf("%d" , &n );
    int arr[n];
    printf("Enter the elements of the array: ");

    for( int i = 0 ; i<n ; i++ ){
        scanf("%d" , &arr[i] );
    }

    for( int i = 1 ; i < n ; i++ ){
        int temp = arr[i];
        int ptr = i-1 ;
        while( temp < arr[ptr] && ptr >=1 ){
            arr[ptr + 1] = arr[ptr] ;
            ptr = ptr - 1 ;
        }
        arr[ptr + 1]=temp ; 
    }

    printf("\nYour Sorteed Array is : ");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d " , arr[i]);
    }
    
}