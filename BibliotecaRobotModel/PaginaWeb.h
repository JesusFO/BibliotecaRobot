#pragma once

using namespace System;

public ref class PaginaWeb {

private:
    String^ Enlace;
    String^ Nombre;
    String^ Catalogo;
    String^ Eventos;
    String^ Aplicaciones;

public:
    PaginaWeb();
    PaginaWeb(String^ Enlace, String^ Nombre, String^ Catalogo, String^ Eventos, String^ Aplicaciones);
};