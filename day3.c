// #include<stdio.h>
// int main(){
//     int i, j, k, n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     for (i = 1; i <=n; ++i){
        
//         for (j = 1; j <= n-i;++j){
//             printf(" ");
//         }
//         for (k = 2; k <=(2*i) ;++k){
//                 printf("*");
//         }
        
//         printf("\n");
//     }
// 

// int main(){
//     int i, j, k, l;
//     printf("Enter a number:");
//     scanf("%d", &i);
//     for (j = i; j > 0; j--){
//         for (k = 1; k <= j;k++){
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
// }
// sum of digits: 360 = 3+6+0 = 9 
// int main(){
//     int i, j=0, k;
//     printf("Enter a number:");
//     scanf("%d", &i);
//     while(i!=0){
//         k = i % 10;
//         j += k;
//         i = i/10;
//     }
//     printf("The sum is %d", j);
// }


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, j, number;
    srand(time(NULL));
    i = (rand() % 100) + 1;
    do
    {
        printf("Enter your number:");
        scanf("%d", &number);
        if(number > i){
            printf("TOO HIGH !!!\n");
        }
        else if(number<i){
            printf("TOO LOW !!!\n");
        }

    } while (number != i);
    printf("Number is MATCHEDD");
}