#pragma once
#include "Devolucion.h"

using namespace System;

public ref class ReseñaLibro{

private:
    int IDReseña;
    String^ Autor;
    String^ Contenido;
    int puntuacion;
    Devolucion^ objDevolucion;

public:
    ReseñaLibro();
    ReseñaLibro(int IDReseña, String^ Autor, String^ Contenido, int puntuacion, Devolucion^ objDevolucion);
};

