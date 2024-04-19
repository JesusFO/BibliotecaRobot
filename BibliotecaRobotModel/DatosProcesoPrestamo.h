#pragma once

using namespace System;

public ref class DatosProcesoPrestamo {

private:
    int numerodesolicitud;
    String^ Fecha;
    String^ Hora;
    String^ Direccion;
    String^ DatosUsuario;
    int idlibro;
    String^ IDRepositorio;
    String^ IDVentanillaRecojo;

public:
    DatosProcesoPrestamo();
    DatosProcesoPrestamo(int numerodesolicitud, String Fecha, String Hora, String Direccion, String DatosUsuario, int idlibro, String IDRepositorio, String IDVentanillaRecojo);
}; 
