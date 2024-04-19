#pragma once
#include "Libro.h"

using namespace System;

public ref class ConstanciaDePrestamo{

private:
	int idlibros;
	int cantlibros;
	String^ fechaEntrega;
	String^ horaEntrega;
	String^ fechaDevolución;
	String^ horaDevolución;
	String^ Usuario;
	String^ ciudad;

	//Definimos la asociación
	Libro^ objLibro;

public:
	ConstanciaDePrestamo();
	ConstanciaDePrestamo(int idlibros, int cantlibros, String^ fechaEntrega, String^ horaEntrega, String^ fechaDevolución, String^ horaDevolución, String^ Usuario, String^ ciudad, Libro^ objLibro);
}; 
