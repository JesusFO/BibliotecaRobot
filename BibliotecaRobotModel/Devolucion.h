#pragma once
#include "Robot.h"
#include "Entrega.h"
#include "Multa.h"
#include "ReseñaLibro.h"

using namespace System;

public ref class Devolucion {

    private:
        String^ Estado;
        int IDDevolucion;
        int RetrasoMinutos;
        int Tolerancia;
        int idrobotRecolector;
        List<Entrega^>^ listaEntrega;
        Robot^ objRobot;
        Multa^ objMulta;
        ReseñaLibro^ objReseñaLibro;

public:
	Devolucion();
    Devolucion(int IDDevolucion, String^ Estado, int RetrasoMinutos, int Tolerancia, int idrobotRecolector, List<Entrega^>^ listaEntrega, Robot^ objRobot, Multa^ objMulta, ReseñaLibro^ objReseñaLibro);
};
