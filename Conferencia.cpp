#include "Conferencia.h"

Conferencia::Conferencia(string nombre, int duracion, string ubicacion, string tipo, string tema) : Evento(nombre,duracion,ubicacion){
    this->tipo = tipo;
    this->tema = tema;
}

string Conferencia::getTema(){
    return this->tema;
}

void Conferencia::setTema(string tema){
    this->tema = tema;
}

string Conferencia::getTipo(){
    return this->tipo;
}

void Conferencia::setTipo(string tipo){
    this->tipo = tipo;
}

void Conferencia::verEvento(){
    cout<<" - EVENTO DE CONFERENCIA ";
    Evento::verEvento();
    cout<<" Tipo: "<<this->tipo<<" Tema: "<<this->tema<<endl;
}