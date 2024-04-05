#pragma once

#include "Evento.h"
#include <iostream>

using namespace std;

class Concierto: public Evento{
    private:
        string genero;
    public:
        Concierto(string nombre, int duracion, string ubicacion, string genero);
        string getGenero();
        void setGenero(string genero);
        void verEvento();
};