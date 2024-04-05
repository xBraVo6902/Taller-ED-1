#include "Deportivo.h"

Deportivo::Deportivo(string nombre, int duracion, string ubicacion, string deporte) : Evento(nombre,duracion,ubicacion){
    this->deporte = deporte;
}

string Deportivo::getDeporte(){
    return this->deporte;
}

void Deportivo::setDeporte(string deporte){
    this->deporte = deporte;
}

void Deportivo::verEvento(){
    cout<<" - EVENTO DEPORTIVO ";
    Evento::verEvento();
    cout<<" Deporte: "<<this->deporte<<endl;
}
