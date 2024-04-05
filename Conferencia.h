#pragma once 
#include "Evento.h"
#include <iostream>
using namespace std;

class Conferencia: public Evento{
    private:
        string tipo;
        string tema;
    public:
        Conferencia(string nombre, int duracion, string ubicacion, string tipo, string tema);
        string getTema();
        void setTema(string tema);
        string getTipo();
        void setTipo(string tipo);
        void verEvento();
};