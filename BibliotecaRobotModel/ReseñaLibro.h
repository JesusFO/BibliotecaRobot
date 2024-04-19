#pragma once
#include "Devolucion.h"

using namespace System;

public ref class Rese�aLibro{

private:
    int IDRese�a;
    String^ Autor;
    String^ Contenido;
    int puntuacion;
    Devolucion^ objDevolucion;

public:
    Rese�aLibro();
    Rese�aLibro(int IDRese�a, String^ Autor, String^ Contenido, int puntuacion, Devolucion^ objDevolucion);
};

