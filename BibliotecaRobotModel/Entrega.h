#pragma once
#include "Robot.h"
#include "Devolucion.h"
#include "ValoracionEntrega.h"

using namespace System;

public ref class Entrega{

private:
private:
    int IDEntrega;
    int idrobotEntrega;
    String^ DeclaracionDePrestamo;
    String^ FirmaReceptor;
    Robot^ objRobot;
    Devolucion^ objDevolucion;
    ValoracionEntrega^ objValoracionEntrega;

public:
    Entrega();
    Entrega(String^ DeclaracionDePrestamo, String^ FirmaReceptor, int IDEntrega, int idrobotEntrega, Robot^ objRobot, Devolucion^ objDevolucion, ValoracionEntrega^ objValoracionEntrega);
};
