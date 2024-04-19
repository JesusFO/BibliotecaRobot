#pragma once
using namespace System;
public ref class Libro{

private:
    String^ titulo;
    String^ idlibro;
    String^ categoria;
    String^ estado;
    int edicion;
    String^ resenha;
    String^ etiqueta;
    String^ AutorLibro;
    String^ disponibilidad;

public:

    Libro();
    Libro(String^ titulo, String^ idlibro, String^ categoria, String^ estado, int edicion, String^ resenha, String^ etiqueta, String^ AutorLibro, String^ disponibilidad);
};
