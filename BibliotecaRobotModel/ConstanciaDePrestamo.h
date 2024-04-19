#pragma once
#include "Libro.h"

using namespace System;

public ref class ConstanciaDePrestamo{

private:
	int idlibros;
	int cantlibros;
	String^ fechaEntrega;
	String^ horaEntrega;
	String^ fechaDevoluci�n;
	String^ horaDevoluci�n;
	String^ Usuario;
	String^ ciudad;

	//Definimos la asociaci�n
	Libro^ objLibro;

public:
	ConstanciaDePrestamo();
	ConstanciaDePrestamo(int idlibros, int cantlibros, String^ fechaEntrega, String^ horaEntrega, String^ fechaDevoluci�n, String^ horaDevoluci�n, String^ Usuario, String^ ciudad, Libro^ objLibro);
}; 
