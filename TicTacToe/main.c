#include <stdio.h> 
#include <stdbool.h>


char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
void drawBoard(char grid[3][3]); 
void markBoard(char grid[3][3], int x, int y); 
_Bool checkWin(char grid[3][3]);

int main() 
{   
    int x;
    int y; 
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
        };
    
    printf("\n\tTic Tac Toe\n");

    drawBoard(grid);

    while (checkWin(grid) == false)    
    {
        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);
        markBoard(grid, x, y);
        drawBoard(grid);
    }

    markBoard(grid, 0, 0);
    markBoard(grid, 1, 0);
    markBoard(grid, 2, 0);

    drawBoard(grid);

    if (checkWin(grid) == true) 
        printf("Done!\n");


    return 0; 
}

_Bool checkWin(char grid[3][3])
{
    if (grid[0][0] == 'x' && grid[0][1] == 'x' && grid[0][2] == 'x')
        return true;
    else if (grid[0][0] == 'x' && grid[0][1] == 'x' && grid[0][2] == 'x')
        return true;
    else if (grid[1][0] == 'x' && grid[1][1] == 'x' && grid[1][2] == 'x')
        return true;
    else if (grid[2][0] == 'x' && grid[2][1] == 'x' && grid[2][2] == 'x')
        return true;
    else if (grid[0][0] == 'x' && grid[1][0] == 'x' && grid[2][0] == 'x')
        return true;
    else if (grid[0][1] == 'x' && grid[1][1] == 'x' && grid[2][1] == 'x')
        return true;
    else if (grid[0][2] == 'x' && grid[1][2] == 'x' && grid[2][2] == 'x')
        return true;
    else if (grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x')
        return true;
    else if (grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x')
        return true;
    
    return false; 
}

void markBoard(char grid[3][3], int x, int y) 
{
    if (grid[y][x] != 'x') {
        grid[y][x] = 'x'; 
    }
    else {
        printf("Invalid input\n");
    }

}


void drawBoard(char grid[3][3]) 
{
    int cols = 12; 
    int rows = 9; 
    char board[200];
    int i; 

    char *str1 = "\n\t"; 
    char *str2 = " "; 
    char *str3 = &grid[0][0];
    char *str4 = " | ";
    char *str5 = &grid[0][1];
    char *str6 = " | ";
    char *str7 = &grid[0][2];
    char *str8 = " \n\t";
    snprintf(board, sizeof board, "%s%s%c%s%c%s%c%s", str1, str2, *str3, str4, *str5, str6, *str7, str8);
    char *str9 = "-----------";
    snprintf(board, sizeof board, "%s%s", board, str9);
    char *str10 = "\n\t"; 
    char *str11 = " "; 
    char *str12 = &grid[1][0];
    char *str13 = " | ";
    char *str14 = &grid[1][1];
    char *str15 = " | ";
    char *str16 = &grid[1][2];
    char *str17 = " \n\t";
    snprintf(board, sizeof board, "%s%s%s%c%s%c%s%c%s", board, str10, str11, *str12, str13, *str14, str15, *str16, str17);
    char *str18 = "-----------";
    snprintf(board, sizeof board, "%s%s", board, str18);
    char *str19 = "\n\t"; 
    char *str20 = " "; 
    char *str21 = &grid[2][0];
    char *str22 = " | ";
    char *str23 = &grid[2][1];
    char *str24 = " | ";
    char *str25 = &grid[2][2];
    char *str26 = " \n\n";
    snprintf(board, sizeof board, "%s%s%s%c%s%c%s%c%s", board, str19, str20, *str21, str22, *str23, str24, *str25, str26);

    printf("%s", board);
}
