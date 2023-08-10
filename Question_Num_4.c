//TOWER OF HANOI 

#include<stdio.h>

void TowerOfHanoi( int n , char source , char aux , char dest){
    //If Number of disk  Zero and also Base Condition 
    if(n==0){
        return ;
    }
    
    // Recursive Function 
    TowerOfHanoi(n-1, source , aux , dest) ;
    printf("Move Disk From %d from %c to %c \n", n , source , dest ) ;
    TowerOfHanoi( n-1 , source , aux , dest ) ;

}

int main() {

    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    TowerOfHanoi(n, 'A', 'B', 'C');

return 0;
}
















