#include "interfaz.h"
#include "ur.h"

void printLogo()
{
  std::cout << R"(  ________    _____      _____  ___________ )" << std::endl;
  std::cout << R"( /  _____/   /  _  \    /     \ \_   _____/ )" << std::endl;
  std::cout << R"(/   \  ___  /  /_\  \  /  \ /  \ |    __)_  )" << std::endl;
  std::cout << R"(\    \_\  \/    |    \/    Y    \|        \ )" << std::endl;
  std::cout << R"( \______  /\____|__  /\____|__  /_______  / )" << std::endl;
  std::cout << R"(        \/         \/         \/        \/  )" << std::endl;
  std::cout << R"(________  ___________  ____ _____________   )" << std::endl;
  std::cout << R"(\_____  \ \_   _____/ |    |   \______   \  )" << std::endl;
  std::cout << R"( /   |   \ |    __)   |    |   /|       _/  )" << std::endl;
  std::cout << R"(/    |    \|     \    |    |  / |    |   \  )" << std::endl;
  std::cout << R"(\_______  /\___  /    |______/  |____|_  /  )" << std::endl;
  std::cout << R"(        \/     \/                      \/   )" << std::endl;
}

void printMenu()
{
  std::cout << "Comandos: (N)ueva partida\t(T)irar\t(S)alir";
}

void printInfo( ur::partida partida_ )
{
  std::cout << "Jugador 1: " << partida_.jugador1.puntaje << std::endl;
  std::cout << "Jugador 2: " << partida_.jugador2.puntaje << std::endl;
  std::cout << "Turno: " << partida_.turno << std::endl;
}

void printBoard( char board[3][8] ){
  // Cada cuadrado mide (YSIZE)x(XSIZE) chars
  // El tablero consta de 3x8 cuadrados

  const int YSIZE = 3;
  const int XSIZE = 5;
  
  for( int i = 0 ; i < YSIZE*3 ; i++ )
    {
      int ii = int( i / YSIZE ); // Coordenada i del cuadrado
      int sub_i = i % YSIZE; // Subcoordenada del cuadrado (desde 0 hasta YSIZE -1)
      
      for( int j = 0 ; j < XSIZE * 8 ; j++ )
	{
	  int jj = int( j / XSIZE ); // Coordenada j del cuadrado
	  int sub_j = j % XSIZE; // Subcoordenada del cuadrado (desde 0 hasta XSIZE -1)
	  
	  if( (ii == 0 || ii == 2) && (jj == 4 || jj == 5 ) )
	    { // Casilla inexistente
	      std::cout << ' ';
	    }

	  else if( ( ( ii == 0 || ii == 2 ) && ( jj==0 || jj==7 ) ) || ( ii==1 && jj==3 ) )
	    { // Casilla segura
	      if( sub_i == int( YSIZE / 2 ) && sub_j == int( XSIZE / 2 ) )
		{ // Centro de la casilla segura
		  std::cout << board[ii][jj];
		}
	      else
		{ // Fuera del centro de la casilla segura
		  std::cout << "\u256c";
		}
	    }

	  else
	    { // Casilla normal
	      if( sub_i == int( YSIZE / 2 ) && sub_j == int( XSIZE / 2 ) )
		{ // Centro de la casilla normal
		  std::cout << board[ii][jj];
		}
	      else
		{ // Fuera del centro de la casilla normal
		  if( (ii % 2 == 1 && jj % 2 == 0) || (ii % 2 == 0 && jj % 2 == 1))
		    {
		      std::cout << "\u25ae";
		    }
		  else
		    {
		      std::cout << "\u25af";
		    }
		}
	    }

	}

      std::cout << std::endl;

    }

}
