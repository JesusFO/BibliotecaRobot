#pragma once
#include "Reserva.h"
#include "Usuario.h"
#include "ConstanciaDePrestamo.h"
#include "PaginaWeb.h"
#include "Robot.h"
#include "SeguimientoPrestamo.h"


using namespace System;
using namespace System::Collections::Generic;

public ref class SolicitudPrestamo {
private:
    int idlibro;
    int cantlibros;
    int numerodesolicitud;
    int DiasPrestamo;
    int FilaDeEspera;
    String^ DatosUsuario;
    Reserva^ objReserva;
    Usuario^ objUsuario;
    List<ConstanciaDePrestamo^>^ listaConstancia;
    PaginaWeb^ objPaginaWeb;
    Robot^ objRobot;
    SeguimientoPrestamo^ objSeguimientoPrestamo;

public:
    SolicitudPrestamo();
    SolicitudPrestamo(int idlibro, int cantlibros, int numerodesolicitud, int DiasPrestamo, int FilaDeEspera, String^ DatosUsuario, Reserva^ objReserva, Usuario^ objUsuario, List<ConstanciaDePrestamo^>^ listaConstancia, PaginaWeb^ objPaginaWeb, Robot^ objRobot, SeguimientoPrestamo^ objSeguimientoPrestamo);
};

