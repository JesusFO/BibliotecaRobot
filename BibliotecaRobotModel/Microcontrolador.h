#pragma once
#include "Robot.h"
#include "Actuador.h"

using namespace System;

public ref class Microcontrolador {

private:
    int Numerodeserie;
    int cantidadpines;
    String^ fabricante;
    String^ nombre;
    String^ datasheet;

    Robot^ objRobot;
    Actuador^ objActuador;

public:
    Microcontrolador();
    Microcontrolador(int numerodesolicitud, String^ Fecha, String^ Hora, String^ Direccion, String^ DatosUsuario, int idlibro, String^ IDRepositorio, String^ IDVentanillaRecojo, Robot^ objRobot, Actuador^ objActuador);
};
