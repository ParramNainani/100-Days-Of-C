#include<stdio.h>
int main(){
    int i, j, k, n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <=n; ++i){
        
        for (j = 1; j <= n-i;++j){
            printf(" ");
        }
        for (k = 2; k <=(2*i) ;++k){
                printf("*");
        }
        
        printf("\n");
    }
}