#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("Enter Your X elemnt:") ;
    scanf("%d", &n) ;
    printf("ENter the size of the array");
    int x;
    scanf("%d", &x);
    int arr[x] ;
    printf("Enter The elements of array: ") ;
    for(int i=0; i<=x-1; i++){
        scanf("%d" , &arr[i]) ;
    }
    //Search
    //Check Mark
    bool flag=false ;
    for(int i=0; i<=x-1; i++){
        if(arr[i]==n) flag=true ;

    }
    if(flag=true) printf("Present");
    else printf("404 element not found");
}