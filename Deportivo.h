#pragma once

#include "Evento.h"
#include <iostream>
using namespace std;

class Deportivo: public Evento{
    private:
        string deporte;
    public:
        Deportivo(string nombre, int duracion, string ubicacion, string deporte);
        string getDeporte();
        void setDeporte(string deporte);
        void verEvento();
};