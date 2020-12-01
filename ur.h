// librerias necesarias
#include<iostream>
#include<cstdlib>
#include<ctime>

#ifndef UR_H
#define UR_H

namespace ur
{

	class ficha
	{
		public:

		ficha();			//constructor
		void setpos( int );		//funcion para cambiar la posicion de la ficha
		int getpos();			//funcion para recuparar la posicion de la ficha

		private:

		static int pos;
	};

	class tablero
	{
		public:
	  
		tablero();	
		int getcasilla( int );		//funcion para recuperar el estado de una casilla (segura o no)
		
		private:

		void settab();
		int tab[16];				//vector con los estados de las casillas
	};

	class jugador
	{

		public:

		jugador( int );
		int tirar();
		int getpuntaje();
		int getcolor();
		int getficha( int );
		bool turno();
		void mover( ficha, int );
		void setpuntaje( int );
		void setcolor( int );
		
		private:

		static int puntaje;
		static int color;
		ficha fichas[7];
		tablero tablero1;
	};

	class partida
	{

		public:

		partida( jugador( int ), jugador( int ) );

		int turno;
		jugador jugador1;
		jugador jugador2;
		//void checkeat( jugador, jugador );
		void setestado();
		char * getestado();

		private:

		char estado[3][8];
	};
}

#endif
