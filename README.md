# Taller-ED-1: Gestion de eventos y asistentes.

Camilo Patricio Bravo Jelvez
21.048.333-0
camilo.bravo@alumnos.ucn.cl

Objetos:
# Evento:
Clase padre de los eventos, tiene los atributos: Nombre, duracion y ubicacion. 
- Conferencia:
Atributos: Tipo y tema.
- Deportivo:
Atributos: Deporte.
- Concierto:
Atributos: Genero.
# Asistentes: 
Clase padre de los asistentes, tiene los atributos: Nombre y edad.
- Estudiante: 
Atributos: Carrera y semestre.
- Profesional:
Atributos: empresa y profesion.

# Objetos creados:

- Evento[Conferencia]: Nombre: "Conferencia de IA", Duracion: 120, Ubicacion: "Auditorio", Tipo: "Tecnologia", Tema: "Inteligencia Artificial"
- Asistente[Estudiante]: Nombre: "Juan", Edad: 20, Carrera: "Informatica", Semestre: 3
- Asistente[Estudiante]: Nombre: "Maria", Edad: 21, Carrera: "Informatica", Semestre: 4
- Asistente[Profesional]: Nombre: "Pedro", Edad: 30, Profesion: "Ingeniero", Empresa: "Google"
- Asistente[Profesional]: Nombre: "Ana", Edad: 35, Profesion: "Ingeniero", Empresa: "Microsoft"
- Asistente[Asistente]: Nombre: "Luis", Edad: 25
    
- Evento[Concierto]: Nombre: "Concierto de Rock", Duracion: 180, Ubicacion: "Estadio", Genero: "Rock"
- Asistente[Estudiante]: Nombre: "Carlos", Edad: 22, Carrera: "Musica", Semestre: 5
- Asistente[Estudiante]: Nombre: "Sofia", Edad: 23, Carrera: "Musica", Semestre: 6
- Asistente[Profesional]: Nombre: "Jose", Edad: 40, Profesion: "Musico", Empresa: "Sony"
- Asistente[Profesional]: Nombre: "Luisa", Edad: 45, Profesion: "Musico", Empresa: "Universal"
- Asistente[Asistente]: Nombre: "Pedro", Edad: 30

- Evento[Deportivo]: Nombre: "Final de Futbol", Duracion: 120, Ubicacion: "Estadio", Deporte: "Futbol"
- Asistente[Estudiante]: Nombre: "Juan", Edad: 20, Carrera: "Educacion Fisica", Semestre: 3
- Asistente[Estudiante]: Nombre: "Maria", Edad: 21, Carrera: "Educacion Fisica", Semestre: 4
- Asistente[Profesional]: Nombre: "Pedro", Edad: 30, Profesion: "Entrenador", Empresa: "Barcelona"
- Asistente[Profesional]: Nombre: "Ana", Edad: 35, Profesion: "Entrenador", Empresa: "Real Madrid"
- Asistente[Asistente]: Nombre: "Luis", Edad: 25
