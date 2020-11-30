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

		ficha( int );			//constructor
		void setpos( int );		//funcion para cambiar la posicion de la ficha
		int getpos();			//funcion para recuparar la posicion de la ficha

		private:

		void setcolor( int );	//funcion para definir el color de la ficha
		int pos;				//posicion de la ficha
		int color;				//color de la ficha (blanco o negro)
	};

	class tablero
	{
		public:
	  
	        tablero();	
		void settab();
		bool getstate( int );		//funcion para recuperar el estado de una casilla (segura o no)
		
		private:

		bool tab[16];				//vector con los estados de las casillas
	};

	class jugador
	{

		public:

		jugador( int );
		int tirar();
		void mover( ficha );
		void turno( int );
		
		private:

		int puntaje;
		ficha fichas[7];
		tablero tablero1;
	};

	class partida
	{

		public:

	        partida( jugador, jugador );
		void setestado();
		char * getestado();

		private:

		int turno;
		jugador jugador1;
		jugador jugador2;
		char estado [3][8];
	};
}

#endif
