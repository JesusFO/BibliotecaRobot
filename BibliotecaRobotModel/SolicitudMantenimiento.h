#pragma once
#include "Libro.h"
#include "Robot.h"


using namespace System;

public ref class SolicitudMantenimiento {
private:
    int IDMantenimiento;
    int IDObjeto;
    String^ problema;
    String^ fecha;
    Libro^ objLibro;
    Robot^ objRobot;

public:
    SolicitudMantenimiento();
    SolicitudMantenimiento(int IDMantenimiento, int IDObjeto, String^ problema, String^ fecha, Libro^ objLibro, Robot^ objRobot);
};
