#include "Profesional.h"

Profesional::Profesional(string nombre, int edad, string profesion, string empresa) : Asistente(nombre,edad){
    this->profesion = profesion;
}

string Profesional::getProfesion(){
    return this->profesion;
}

void Profesional::setProfesion(string profesion){
    this->profesion = profesion;
}

string Profesional::getEmpresa(){
    return this->empresa;
}

void Profesional::setEmpresa(string empresa){
    this->empresa = empresa;
}

void Profesional::verAsistente(){
    cout<<" - PROFESIONAL ";
    Asistente::verAsistente();
    cout<<" Profesion: "<<this->profesion<<endl;
}