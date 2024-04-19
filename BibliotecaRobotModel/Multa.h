#pragma once
using namespace System;
public ref class Multa {
public:

    Multa();
    Multa(int IDMulta, String^ Motivo, double MontoSoles, String^ Usuario);
private:
    int IDMulta;
    String^ Motivo;
    double MontoSoles;
    String^ Usuario;
};