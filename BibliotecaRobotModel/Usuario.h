#include "Reserva.h"
#include "Notificacion.h"
#include "SolicitudPrestamo.h"
#pragma once

using namespace System;

public ref class Usuario{
private:
    int codigo;
    String^ nombreCompleto;
    String^ Direccion;
    String^ correo;
    String^ cuentaUsuario;
    long telefono;
    Reserva^ objReserva;
    Notificacion^ objNotificacion;
    SolicitudPrestamo^ objSolicitudPrestamo;

public:
    Usuario();
    Usuario(int codigo, String^ nombreCompleto, String^ Direccion, String^ correo, String^ cuentaUsuario, long telefono, Reserva^ objReserva, Notificacion^ objNotificacion, SolicitudPrestamo^ objSolicitudPrestamo);
    void LoggIn();
    void GeneraSolicitudPrestamo();
    void RecibeNotificacion();
};

