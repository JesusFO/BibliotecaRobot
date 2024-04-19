#include "SolicitudPrestamo.h"
#pragma once

using namespace System;

public ref class SeguimientoPrestamo {
private:
    int VencimientoPrestamoHoras;
    int RenovacionPrestamoHoras;
    String^ Estado;
    String^ DatosUsuario;
    int numerodesolicitud;
    SolicitudPrestamo^ objSolicitudPrestamo;

public:
    SeguimientoPrestamo();
    SeguimientoPrestamo(int VencimientoPrestamoHoras, int RenovacionPrestamoHoras, String^ Estado, String^ DatosUsuario, int numerodesolicitud, SolicitudPrestamo^ objSolicitudPrestamo);
};
