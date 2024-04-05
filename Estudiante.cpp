#include "Estudiante.h"

Estudiante::Estudiante(string nombre, int edad, string carrera, int semestre) : Asistente(nombre,edad){
    this->carerra = carrera;
    this->semestre = semestre;
}

string Estudiante::getCarrera(){
    return this->carerra;
}

int Estudiante::getSemestre(){
    return this->semestre;
}

void Estudiante::ver(){
    cout<<" - ESTUDIANTE ";
    Asistente::verAsistente();
    cout<<" Carrera: "<<this->carerra<<" | Semestre: "<<this->semestre<<endl;
}