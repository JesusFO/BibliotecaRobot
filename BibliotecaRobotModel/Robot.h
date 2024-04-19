#pragma once

using namespace System;

public ref class Robot {

private:
    int idrobot;
    double velocidad;
    int bateria;
    double dimensiones;
    double CapacidadCarga;

public:
    Robot();
    Robot(int idrobot, double velocidad, int bateria, double dimensiones, double CapacidadCarga);

};