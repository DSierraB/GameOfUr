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

		ficha();
		void setpos( int );
		int getpos();

		private:

		static int pos;
	};

	class tablero
	{
		public:
	  
		tablero();	
		int getcasilla( int );
		
		private:

		void settab();
		int tab[16];
	};

	class jugador
	{

		public:

		jugador();
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

		partida();

		int turno;
		jugador jugador1;
		jugador jugador2;
		void setestado();
		void ronda();
		char (* getestado() )[8];

		private:

		char estado[3][8];
	};
}

#endif
