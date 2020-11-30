#include "interfaz.h"

int main()
{

  char board[3][8];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 8; j++){
      board[i][j] = ' ';
    }
  }

  printLogo();

  printBoard( board );

  return 0;
}
  
