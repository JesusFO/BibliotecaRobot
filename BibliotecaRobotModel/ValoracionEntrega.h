#pragma once
#include     "Entrega.h"


using namespace System;

public ref class ValoracionEntrega {
private:
    int idvaloracion;
    String^ usuario;
    String^ comentario;
    int puntuacion;
    Entrega^ objEntrega;

public:
    ValoracionEntrega();
    ValoracionEntrega(int idvaloracion, String^ usuario, String^ comentario, int puntuacion, Entrega^ objEntrega);
};
