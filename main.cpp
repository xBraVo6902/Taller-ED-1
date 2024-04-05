#include "Evento.h"
#include "Concierto.h"
#include "Deportivo.h"
#include "Conferencia.h"
#include "Asistente.h"
#include "Estudiante.h"
#include "Profesional.h"
#include <fstream>

#include <iostream>
#include <list>
using namespace std;


void verEventos(list<Evento*> eventos){
    int cont=1;
    for(Evento* evento : eventos){
        cout<<cont<<". "<<evento->getNombre()<<endl;
        cont++;
    }
}

void crearEventoDeportivo(list<Evento*>& eventos){
    string nombre;
    int duracion;
    string ubicacion;
    string deporte;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Duracion: ";
    cin>>duracion;
    cout<<"Ubicacion: ";
    cin>>ubicacion;
    cout<<"Deporte: ";
    cin>>deporte;
    
    eventos.push_back(new Deportivo(nombre,duracion,ubicacion,deporte));
}

void crearConcierto(list<Evento*>& eventos){
    string nombre;
    int duracion;
    string ubicacion;
    string genero;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Duracion: ";
    cin>>duracion;
    cout<<"Ubicacion: ";
    cin>>ubicacion;
    cout<<"Genero: ";
    cin>>genero;
    
    eventos.push_back(new Concierto(nombre,duracion,ubicacion,genero));
}

void crearConferencia(list<Evento*>& eventos){
    string nombre;
    int duracion;
    string ubicacion;
    string tipo;
    string tema;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Duracion: ";
    cin>>duracion;
    cout<<"Ubicacion: ";
    cin>>ubicacion;
    cout<<"Tipo: ";
    cin>>tipo;
    cout<<"Tema: ";
    cin>>tema;
    
    eventos.push_back(new Conferencia(nombre,duracion,ubicacion,tipo,tema));
}

void crearEvento(list<Evento*>& eventos){
    int tipoEvento;
    cout<<"Tipo de evento:"<<endl;
    cout<<"1. Conferencia"<<endl;
    cout<<"2. Concierto"<<endl;
    cout<<"3. Deportivo"<<endl;
    cin>>tipoEvento;
    
    switch (tipoEvento)
    {
    case 1:
        crearConferencia(eventos);
        break;
    case 2:
        crearConcierto(eventos);
        break;
    
    case 3:
        crearEventoDeportivo(eventos);
        break;

    default:
        cout<<"opcion no disponible!!"<<endl;
        break;
    }
}

void crearEstudiante(Evento* evento){
    string nombre;
    int edad;
    string carrera;
    int semestre;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Edad: ";
    cin>>edad;
    cout<<"Carrera: ";
    cin>>carrera;
    cout<<"Semestre: ";
    cin>>semestre;
    
    Estudiante* estudiante = new Estudiante(nombre,edad,carrera,semestre);
    evento->agregarAsistente(estudiante);
    
}

void crearProfesional(Evento* evento){
    string nombre;
    int edad;
    string profesion;
    string empresa;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Edad: ";
    cin>>edad;
    cout<<"Profecion: ";
    cin>>profesion;
    cout<<"Empresa: ";
    cin>>empresa;
    
    Profesional* profesional = new Profesional(nombre, edad, profesion, empresa);
    evento->agregarAsistente(profesional);
}

void crearNormal(Evento* evento){
    string nombre;
    int edad;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Edad: ";
    cin>>edad;
    
    Asistente* asistente = new Asistente(nombre, edad);
    evento->agregarAsistente(asistente);
} 

void crearYAgregarAsistente(Evento* evento){
    cout<<"Seleccione el tipo de asistente"<<endl;
    cout<<"1. Estudiante"<<endl;
    cout<<"2. Profesional"<<endl;
    cout<<"3. Normal"<<endl;
    int tipoAsistente;
    cin>>tipoAsistente;
    switch (tipoAsistente){
        case 1:
            crearEstudiante(evento);
            break;

        case 2:
            crearProfesional(evento);
            break;
            
        case 3:
            crearNormal(evento);
            break;

        default:
            cout<<"Opcion no valida!!"<<endl;
        break;
    }
}

Evento* buscarEvento(list<Evento*> eventos, int numeroEvento){
    int cont = 1;
    for(Evento* evento : eventos){
        if(cont == numeroEvento){
            return evento;
        }
        cont++;
    }
    return NULL;
}

void registrarAsistentes(list<Evento*>& eventos){
    int opcion;
    cout<<"Seleccione un evento"<<endl;
    verEventos(eventos);
    cout<<" >"; 
    cin>>opcion;
    Evento* evento = buscarEvento(eventos, opcion);

    int opcion2 = 1;

    while (opcion == 1) {
        cout<<"Registre el nuevo asistente"<<endl;
        crearYAgregarAsistente(evento);
        cout<<"Desea agregar otro asistente? (1. Si/2. No): ";
        cin>>opcion;
    }

    cout<<"Proceso finalizado"<<endl;
}

void listaAsistentes(list<Evento*> eventos){
    int opcion;
    cout<<"seleccione un evento"<<endl;
    verEventos(eventos);
    cout<<" >"; cin>>opcion;
    Evento* evento = buscarEvento(eventos, opcion);

    evento->verAsistentes();
}


void informes(list<Evento*> eventos){
    cout<<"Eventos:"<<endl;
    for(Evento* evento : eventos){
        cout<<"-------------------------------------------------"<<endl;
        evento->verEvento();
        cout<<endl;
        evento->verAsistentes();
        cout<<"Promedio de edad de los asistentes del evento: "<<evento->promedioEdad()<<endl;
        cout<<endl;
    }
}

void menu(list<Evento*>& eventos){
    int opcion;
    cout<<"MENU"<<endl;
    cout<<"1. crear evento"<<endl;
    cout<<"2. registrar asistentes"<<endl;
    cout<<"3. Lista de Asistentes"<<endl;
    cout<<"4. Informes"<<endl;
    cout<<" >";
    cin>>opcion;

    while(opcion != 0){

        switch (opcion)
        {
        case 1:
            crearEvento(eventos);
            break;
        
        case 2:
            registrarAsistentes(eventos);
            break;

        case 3:
            listaAsistentes(eventos);
            break;

        case 4:
            informes(eventos);
            break;

        default:
            break;
        }

        cout<<"Menu"<<endl;
        cout<<"1. crear evento"<<endl;
        cout<<"2. registrar asistentes"<<endl;
        cout<<"3. Lista de Asistentes"<<endl;
        cout<<"4. Informes"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<" >";
        cin>>opcion;

    }
}

void llenarEventos(list<Evento*>& eventos){
    Evento* evento1 = new Conferencia("Conferencia de IA", 120, "Auditorio", "Tecnologia", "Inteligencia Artificial");
    evento1->agregarAsistente(new Estudiante("Juan", 20, "Informatica", 3));
    evento1->agregarAsistente(new Estudiante("Maria", 21, "Informatica", 4));
    evento1->agregarAsistente(new Profesional("Pedro", 30, "Ingeniero", "Google"));
    evento1->agregarAsistente(new Profesional("Ana", 35, "Ingeniero", "Microsoft"));
    evento1->agregarAsistente(new Asistente("Luis", 25));
    eventos.push_back(evento1);

    Evento* evento2 = new Concierto("Concierto de Rock", 180, "Estadio", "Rock");
    evento2->agregarAsistente(new Estudiante("Carlos", 22, "Musica", 5));
    evento2->agregarAsistente(new Estudiante("Sofia", 23, "Musica", 6));
    evento2->agregarAsistente(new Profesional("Jose", 40, "Musico", "Sony"));
    evento2->agregarAsistente(new Profesional("Luisa", 45, "Musico", "Universal"));
    evento2->agregarAsistente(new Asistente("Pedro", 30));
    eventos.push_back(evento2);

    Evento* evento3 = new Deportivo("Final de Futbol", 120, "Estadio", "Futbol");
    evento3->agregarAsistente(new Estudiante("Juan", 20, "Educacion Fisica", 3));
    evento3->agregarAsistente(new Estudiante("Maria", 21, "Educacion Fisica", 4));
    evento3->agregarAsistente(new Profesional("Pedro", 30, "Entrenador", "Barcelona"));
    evento3->agregarAsistente(new Profesional("Ana", 35, "Entrenador", "Real Madrid"));
    evento3->agregarAsistente(new Asistente("Luis", 25));
    eventos.push_back(evento3);

}

int main(){
    list<Evento*> eventos;

    llenarEventos(eventos);
    menu(eventos);

    return 0;
}