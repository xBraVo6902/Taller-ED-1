#include "Evento.h"

Evento::Evento(string nombre, int duracion, string ubicacion){
    this->nombre = nombre;
    this->duracion = duracion;
    this->ubicacion = ubicacion;
}

string Evento::getNombre(){ 
    return this->nombre; 
    }

int Evento::getDuracion(){ 
    return this->duracion; 
    }

string Evento::getUbicacion(){
    return this->ubicacion; 
    }

void Evento::setNombre(string nombre){ 
    this->nombre = nombre; 
    } 

void Evento::setDuracion(int time){
    this->duracion = time; 
    }

void Evento::setUbicacion(string ubi){
    this->ubicacion = ubi;
    }

void Evento::verEvento(){
    cout<<"Nombre: "<<this->nombre<<" | Duracion: "<<this->duracion<<" m | Ubicacion: "<<this->ubicacion;
}

void Evento::agregarAsistente(Asistente* asistente){
    this->asistentes.push_back(asistente);
}

void Evento::verAsistentes(){
    cout<<" Total de asistentes a '"<< this->nombre << "' : "<< asistentes.size() <<endl;
    for(Asistente* a : this->asistentes){
        a->verAsistente();
        cout<<endl;
    }
}

int Evento::promedioEdad(){
    int edadTotal = 0;
    for(Asistente* asistente : asistentes){
        edadTotal += asistente->getEdad();
    }

    int edadPromedio = edadTotal / asistentes.size();
    return edadPromedio;   
}
