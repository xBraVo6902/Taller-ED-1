#pragma once
#include "Asistente.h"
#include <iostream>
using namespace std;

class Estudiante: public Asistente{
    private:
        string carerra;
        int semestre;
    public:
        Estudiante(string nombre, int edad, string carrera, int semestre);
        string getCarrera();
        int getSemestre();
        void ver();
};