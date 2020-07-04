#include <stdbool.h>
#include <stdlib.h>

bool chess_board_cell_color(const char* cell1, const char *cell2)
{
    int col1 = (int)*(cell1) - 64;
    int row1 = atoi((cell1 + 1)); 
  
    int col2 = (int)*(cell2) - 64;
    int row2 = atoi((cell2 + 1)); 
  
    if (row1 % 2 == col1 % 2)
      if (row2 % 2 == col2 % 2)
        return true;
    if (row1 % 2 != col1 % 2)
      if (row2 % 2 != col2 % 2)
        return true;
    return false;
}