#pragma once
#include "PaginaWeb.h"

using namespace System;
public ref class Biblioteca {

private:
    String^ Direccion;
    String^ Nombre;
    String^ inventario;
    String^ HorarioAtencion;
    String^ Catalogo;
    String^ RegistrosPrestamo;
    PaginaWeb^ objPaginaWeb;

    public:

    Biblioteca();
    Biblioteca(String^ Direccion, String^ Nombre, String^ inventario, String^ HorarioAtencion, String^ Catalogo, String^ RegistrosPrestamo, PaginaWeb^ objPaginaWeb);
};
