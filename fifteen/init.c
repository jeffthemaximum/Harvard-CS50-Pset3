#include <cs50.h>
#include <stdio.h>

int main (void) {
    printf("Please provide board size:\n");
    int d = GetInt();
    int board[d][d];

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
                board[i][j] = d*d - (j + (i*d)+1);
                printf("board[%d][%d] = %d \n", i, j, board[i][j]);
            }
        }
    //for each row
    for (int i = 0; i < d; i++) {
    
        //for each value in row
        for (int j = 0; j < d; j++) {
        
            //print value and space
            printf("%2d ", board[i][j]);
            
        }           
        //print new line
        printf("\n");
    }
}
