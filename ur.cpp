#include "ur.h"

ur::ficha::ficha( int n ){};

void ur::ficha::setpos( int new_pos ){};

int ur::ficha::getpos(){};

void ur::ficha::setcolor( int new_color ){};

ur::tablero::tablero(){};

void ur::tablero::settab(){};

bool ur::tablero::getstate( int pos_ ){};

ur::jugador::jugador( int nose_ ){};

int ur::jugador::tirar(){

  srand(time(NULL));

  int s = 0;

  for( int i = 0 ; i < 4 ; i++ )
    {
      s += rand() % 2; // 4 dados binarios
    }

  return s;
}

void ur::jugador::mover( ficha id_ficha ){};

void ur::jugador::turno( int n ){};

ur::partida::partida( jugador jugador1_( int n1 ) , jugador jugador2_( int n2 ) ){};

void ur::partida::setestado(){};

char * ur::partida::getestado(){};

