// X AND O 
#include<stdio.h> 
void board(char board[3][3]){
    int i, j,k=1;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            board[i][j] = k + '0';
            k++;
        }
    }
}

void printBoard(char board[3][3]) {
    for (int k = 0; k < 3; k++) {
        for (int z = 0; z < 3; z++) {
            printf("%c|", board[k][z]);
        }
        printf("\n");
    }
}

int win(char board[3][3]) {
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
        printf("WINNER IS %c\n", board[0][0]);
        return 1;
    } 
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) { 
        printf("WINNER IS %c\n", board[1][0]);
        return 1;
    } 
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
        printf("WINNER IS %c\n", board[2][0]);
        return 1;
    }
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
        printf("WINNER IS %c\n", board[0][0]);
        return 1;
    } 
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
        printf("WINNER IS %c\n", board[0][1]);
        return 1;
    } 
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
        printf("WINNER IS %c\n", board[0][2]);
        return 1;
    }

    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        printf("WINNER IS %c\n", board[0][0]);
        return 1;
    } 
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) { 
        printf("WINNER IS %c\n", board[0][2]);
        return 1;
    }

    else {
        return 0;
    }
}
void update(char board[3][3] , int n , char j){
    switch(n){
        case 1:
            board[0][0] = j;
            break;
        case 2:
            board[0][1] = j;
            break;
        case 3:
            board[0][2] = j;
            break;
        case 4:
            board[1][0] = j;
            break;
        case 5:
            board[1][1] = j;
            break;
        case 6:
            board[1][2] = j;
            break;
        case 7:
            board[2][0] = j;
            break;
        case 8:
            board[2][1] = j;
            break;
        case 9:
            board[2][2] = j;
            break;
    }
}
void move(char board[3][3]){
    int i;
    char j;
    printf("Choose your move (1-9) and Your Player (X,O):");
    scanf("%d %c", &i,&j);
    update(board,i,j);
}

int main(){
    char A[3][3];
    board(A);
    int i = 1;
    int gameOver = 0;
    while (gameOver == 0) { 
        printBoard(A); 
        move(A);      
        gameOver = win(A);
        if(gameOver == 1 ){
            break;
        }
        if(i==9){
            printf("Draw\n");
            break;
        }
        i++;
    }
    printf("Game Over! Final Board:\n");
    printBoard(A);

    return 0;
}