#pragma once
#include "Usuario.h"

using namespace System;

public ref class Notificacion {

private:
    String^ asunto;
    String^ DatosUsuario;
    String^ contenido;
    String^ Fecha;
    String^ Hora;
    Usuario ^ objUsuario;

public:
    Notificacion();
    Notificacion(String^ asunto, String^ DatosUsuario, String^ contenido, String^ Fecha, String^ Hora, Usuario^ objUsuario);
};