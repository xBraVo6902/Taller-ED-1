#include "Concierto.h"

using namespace std;

Concierto::Concierto(string nombre, int duracion, string ubicacion, string genero) : Evento(nombre,duracion,ubicacion){
    this->genero = genero;
}

string Concierto::getGenero(){
    return this->genero;
}

void Concierto::setGenero(string genero){
    this->genero = genero;
}

void Concierto::verEvento(){
    cout<<" - EVENTO CONCIERTO ";
    Evento::verEvento();
    cout<<" Genero: "<<this->genero<<endl;
}
