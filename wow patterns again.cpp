#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++ ){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            if(i%2!=0){
                printf("^");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

Sample Input 2

6
Sample Output 2

     ^
    ***
   ^^^^^
  *******
 ^^^^^^^^^
***********
