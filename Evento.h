#pragma once
#include "Asistente.h"
#include <iostream>
#include <list>

using namespace std;

class Evento{
    private:
        string nombre;
        int duracion;
        string ubicacion;
        list<Asistente*> asistentes;

    public:
        Evento(string nombre, int duracion, string ubicacion);
        string getNombre();
        int getDuracion();
        string getUbicacion();
        void setNombre(string nombre);
        void setDuracion(int duracion);
        void setUbicacion(string ubicacion);
        void agregarAsistente(Asistente* asistente);
        void verAsistentes();
        int promedioEdad();
        virtual void verEvento();
};