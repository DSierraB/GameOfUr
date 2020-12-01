#include "interfaz.h"
#include "ur.h"

int main()
{

	ur::partida partida1;

  printLogo();
	printBoard( partida1.getestado() );

	while ((partida1.jugador1.getpuntaje() < 7) or (partida1.jugador2.getpuntaje() < 7))
	{
		partida1.ronda();
	  printBoard( partida1.getestado() );
	}

	return 0;
}
  
