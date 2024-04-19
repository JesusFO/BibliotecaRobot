#pragma once
using namespace System;
public ref class Repositorio {
public:

    Repositorio();
    Repositorio(String^ Estante, int Piso, String^ Categoria, String^ Autores, String^ IDRepositorio, String^ etiqueta);
private:
    String^ Estante;
    int Piso;
    String^ Categoria;
    String^ Autores;
    String^ IDRepositorio;
    String^ etiqueta;
};

