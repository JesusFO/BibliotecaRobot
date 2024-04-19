#pragma once
#include "Devolucion.h"

using namespace System;

public ref class ReseņaLibro{

private:
    int IDReseņa;
    String^ Autor;
    String^ Contenido;
    int puntuacion;
    Devolucion^ objDevolucion;

public:
    ReseņaLibro();
    ReseņaLibro(int IDReseņa, String^ Autor, String^ Contenido, int puntuacion, Devolucion^ objDevolucion);
};

