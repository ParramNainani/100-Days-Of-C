// #include<stdio.h>
// int main(){
//     char a[100]; // collection of characters is called a string
//     printf("Enter name:");
//     scanf("%s",&a); //user se input lo
//     printf("The name user entered is %s" , a);
//     return 0;
// }


// int main(){
//     int i;
//     printf("Enter a Number:");
//     scanf("%d", &i);
//     if(i%2==0){
//         printf("Number is even");
//     }
//     else{
//         printf("Number is odd");
//     };
// }

// int main(){
//     int i, j, k;
//     printf("enter 3 numbers:");
//     scanf("%d %d %d", &i, &j, &k);
//     if(i==j==k){
//         printf("All numbers are equal\n");
//     }
//     else if (i == j || j == k || i == k){ // if i==j OR j==k OR k==i (OR MEANS ANY ONE OF THE CONDITION SHALL BE TRUE)
//         printf("two numbers are equal\n");
//     }


//     if(i>j && i>k){ // if i>j and i>k (AND that is BOTH OF THE CONDITIONS SHALL BE TRUE)
//         printf("%d is greatest", i); 
//     }
//     else if(j>i && j>k){
//         printf("%d is greatest", j);
//     }
//     else{
//         printf("%d is greatest", k);
//     }
// }

// int main(){
//     int i, j;
//     char x;
//     printf("Enter two numbers:");
//     scanf("%d %d", &i, &j);
//     printf("Enter operation (+,-,x,/):");
//     scanf(" %c", &x); // " %c", The space is important;
//     switch (x){
//         case '+':
//             printf("The sum is %d", i + j);
//             break;
//         case '-':
//             printf("The subtraction is %d", i - j);
//             break;
//         case 'x':
//             printf("The multiplication is %d", i * j);
//             break;
//         case '/':
//             if(j==0){
//                 printf("division by 0 not possible");
//             }
//             else{
//                 printf("The division is %d", i / j);
//                 break;
//             }
//     }
//     return 0;
// }

// int main(){
//     int i , k = 1;
//     printf("Enter a number:");
//     scanf("%d", &i);
//     for (int j=2; j<= i/2; j++){
//         if(i%j==0){
//             k=0;
//         }
//     }
//     if (k == 1){
//         printf("number is prime");
//     }
//     else{
//         printf("Not Prime");
//     }
// }

#include<stdio.h>
// int main(){
//     int i,j,k=1;
//     printf("Enter a number:");
//     scanf("%d", &j);
//     for (i = j; i > 0; i--)
//     {
//         k = k * i;
//     };
//     printf("Factorial is %d",k);
// }

// int fibonacci(int n){
//     if(n == 1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     //f(n) = f(n-1) + f(n-2)  0 , 1 , (0+1=1)
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     int n, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci: ");
//     for (i = 1; i < n+1; i++){
//         printf("%d, ", fibonacci(i));
//     }
//     return 0;
// }

// int main(){
//     int i,n;
//     printf("Enter number of rows:");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


