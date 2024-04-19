#pragma once

#define "Microcontrolador.h"

using namespace System;
public ref class Actuador {
public:

    Actuador();
    Actuador(String^ Funcion, String^ TipoConexion, String^ IDActuador, String^ TipoSenhal,  Microcontrolador^ objMicrocontrolador);
private:
    String^ Funcion;
    String^ TipoConexion;
    String^ IDActuador;
    String^ TipoSenhal;
    Microcontrolador^ objMicrocontrolador;
};
