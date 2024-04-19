#pragma once
#include "Usuario.h"
#include "SolicitudPrestamo.h"

using namespace System;

public ref class Reserva {

private:
    int Prioridad;
    int IDReserva;
    String^ Fecha;
    String^ Hora;
    Usuario^ objUsuario;
    SolicitudPrestamo^ objSolicitudPrestamo;

public:
    Reserva();
    Reserva(int Prioridad, int IDReserva, String^ Fecha, String^ Hora, Usuario^ objUsuario, SolicitudPrestamo^ objSolicitudPrestamo);
};


