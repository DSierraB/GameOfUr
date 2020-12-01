#include "ur.h"
#include "interfaz.h"

ur::ficha::ficha()
{
	setpos(0);
};

int ur::ficha::pos = 0;

void ur::ficha::setpos( int new_pos )
{
	pos = new_pos;
};

int ur::ficha::getpos()
{
	return pos;
};

ur::tablero::tablero()
{
	settab();
};

void ur::tablero::settab()
{
	tab[5] = 1;
	tab[6] = 1;
	tab[7] = 1;
	tab[9] = 1;
	tab[10] = 1;
	tab[11] = 1;
	tab[12] = 1;
};

int ur::tablero::getcasilla( int pos_ )
{
	return tab[pos_];
};

ur::jugador::jugador()
{
	setpuntaje(0);
};

int ur::jugador::puntaje = 0;

int ur::jugador::color = 0;

int ur::jugador::tirar()
{
	srand(time(NULL));

	int s = 0;

	for( int i = 0 ; i < 3 ; i++ )
	{
		s += rand() % 2;
	}

	return s;
}

int ur::jugador::getpuntaje()
{
	return puntaje;
}

int ur::jugador::getcolor()
{
	return color;
}

int ur::jugador::getficha( int n )
{
	return fichas[n].getpos();
}

bool ur::jugador::turno()
{
	char letras[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
	int dados = tirar();

	if (color == 0)
	{
		char selec = SeleccionFicha();

		if (((fichas[0].getpos() + dados) > 16) && ((fichas[1].getpos() + dados) > 16) && ((fichas[2].getpos() + dados) > 16) && 
		((fichas[3].getpos() + dados) > 16) && ((fichas[4].getpos() + dados) > 16) && ((fichas[5].getpos() + dados) > 16) && 
		((fichas[6].getpos() + dados) > 16))
		{
			std::cout << "No hay movimientos validos posibles\n";
			return false;
		}

		else if (selec == letras[0])
		{
			if ((fichas[0].getpos() + dados) <= 16)
			{
				mover( fichas[0], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una pieza para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[1])
		{
			if ((fichas[1].getpos() + dados) <= 16)
			{
				mover( fichas[1], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[2])
		{
			if ((fichas[2].getpos() + dados) <= 16)
			{
				mover( fichas[2], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[3])
		{
			if ((fichas[3].getpos() + dados) <= 16)
			{
				mover( fichas[3], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[4])
		{
			if ((fichas[4].getpos() + dados) <= 16)
			{
				mover( fichas[4], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[5])
		{
			if ((fichas[5].getpos() + dados) <= 16)
			{
				mover( fichas[5], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else if (selec == letras[6])
		{
			if ((fichas[6].getpos() + dados) <= 16)
			{
				mover( fichas[6], dados );
				return false;
			}

			else
			{
				std::cout << "Por favor seleccione una ficha para la cual el movimiento sea valido\n";
				return true;
			}
		}

		else
		{
			std::cout << "Por favor seleccione una ficha\n";
			return false;
		}
	}

	if (color == 1)
	{
		int dados = tirar();

		if (((fichas[0].getpos() + dados) > 16) && ((fichas[1].getpos() + dados) > 16) && ((fichas[2].getpos() + dados) > 16) && 
		((fichas[3].getpos() + dados) > 16) && ((fichas[4].getpos() + dados) > 16) && ((fichas[5].getpos() + dados) > 16) && 
		((fichas[6].getpos() + dados) > 16))
		{
			std::cout << "No hay movimientos validos posibles\n";
			return false;
		}

		else if ((fichas[0].getpos() + dados) == 16)
		{
			mover( fichas[0], dados );
			return false;
		}

		else if ((fichas[1].getpos() + dados) == 16)
		{
			mover( fichas[1], dados );
			return false;
		}

		else if ((fichas[2].getpos() + dados) == 16)
		{
			mover( fichas[2], dados );
			return false;
		}

		else if ((fichas[3].getpos() + dados) == 16)
		{
			mover( fichas[3], dados );
			return false;
		}

		else if ((fichas[4].getpos() + dados) == 16)
		{
			mover( fichas[4], dados );
			return false;
		}

		else if ((fichas[5].getpos() + dados) == 16)
		{
			mover( fichas[5], dados );
			return false;
		}

		else if ((fichas[6].getpos() + dados) == 16)
		{
			mover( fichas[6], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[0].getpos() + dados) == 0)
		{
			mover( fichas[0], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[1].getpos() + dados) == 0)
		{
			mover( fichas[1], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[2].getpos() + dados) == 0)
		{
			mover( fichas[2], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[3].getpos() + dados) == 0)
		{
			mover( fichas[3], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[3].getpos() + dados) == 0)
		{
			mover( fichas[3], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[4].getpos() + dados) == 0)
		{
			mover( fichas[4], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[5].getpos() + dados) == 0)
		{
			mover( fichas[5], dados );
			return false;
		}

		else if (tablero1.getcasilla(fichas[6].getpos() + dados) == 0)
		{
			mover( fichas[6], dados );
			return false;
		}

		else if ((fichas[0].getpos() + dados) < 16)
		{
			mover( fichas[0], dados );
			return false;
		}

		else if ((fichas[1].getpos() + dados) < 16)
		{
			mover( fichas[1], dados );
			return false;
		}

		else if ((fichas[2].getpos() + dados) < 16)
		{
			mover( fichas[2], dados );
			return false;
		}

		else if ((fichas[3].getpos() + dados) < 16)
		{
			mover( fichas[3], dados );
			return false;
		}

		else if ((fichas[4].getpos() + dados) < 16)
		{
			mover( fichas[4], dados );
			return false;
		}

		else if ((fichas[5].getpos() + dados) < 16)
		{
			mover( fichas[5], dados );
			return false;
		}

		else
		{
			mover( fichas[6], dados );
			return false;
		}
	}
};

void ur::jugador::mover( ficha id_ficha, int n )
{
	id_ficha.setpos(id_ficha.getpos() + n);
};

void ur::jugador::setpuntaje( int punt_ )
{
	puntaje = punt_;
};

void ur::jugador::setcolor( int col_ )
{
	color = col_;
};

ur::partida::partida()
{
  setestado();
};

void ur::partida::setestado()
{

	char letras[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

	for( int i=0; i < 3; i++ )
	{
		for( int j=0; j < 8; j++)
		{
			estado[i][j] = ' ';
		}
	};

	for( int i=0; i < 7; i++ )
	{
	  if( jugador2.getficha(i) < 5 )
		{
		  estado[0][4-jugador2.getficha(i)] = 'O';
		}
	  else if( jugador2.getficha(i) < 13 )
		{
		  estado[1][jugador2.getficha(i)-5] = 'O';
		}
		else
		{
		  estado[0][20-jugador2.getficha(i)] = 'O';	
		}
	}

	for( int i=0; i < 7; i++ )
	{
	  if( jugador1.getficha(i) < 5 )
		{
		  estado[0][4-jugador1.getficha(i)] = letras[i];
		}
	  else if( jugador2.getficha(i) < 13 )
		{
		  estado[1][jugador1.getficha(i)-5] = letras[i];
		}
		else
		{
		  estado[2][20-jugador1.getficha(i)] = letras[i];	
		}
	}
};

void ur::partida::ronda()
{

	while(jugador1.turno())
	{

	}

	while(jugador2.turno())
	{

	}

	int punt1 = 0;
	int punt2 = 0;

	for ( int i=0; i < 7; i++ )
	{
		if (jugador1.getficha(i) > 15)
		{
			punt1++;
		}

		if (jugador2.getficha(i) > 15)
		{
			punt2++;
		}
	}

	jugador1.setpuntaje(punt1);
	jugador2.setpuntaje(punt2);

	setestado();
}

char (* ur::partida::getestado())[8]
{
	return estado;
};

