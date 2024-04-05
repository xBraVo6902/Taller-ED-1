#pragma once 
#include "Evento.h"

#include <iostream>

using namespace std;

class Profesional: public Asistente{
    private:
        string profesion;
        string empresa;
    public:
        Profesional(string nombre, int edad, string profesion, string empresa);
        string getProfesion();
        void setProfesion(string profesion);
        string getEmpresa();
        void setEmpresa(string empresa);
        void verAsistente();
        
};