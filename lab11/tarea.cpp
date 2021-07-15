#include <stdio.h>
#include <stdlib.h> // sytem() -> llamadas a sistema
#include <string.h> // funciones para cadena de caracteres


int opcion;
FILE* agenda;
char nombreArchivo[20];
char apellido[15];
char nombre[15];
char telefono[15];

//Prototipos

void menuInicio();
void menuAgenda();
void MostrarAgendas();
void NuevaAgenda(char nombreArchivo[20]);
void selecciondeAgenda();
void lecturaAgenda(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]);
void pedirDatos(char nombre[15], char apellido[15], char telefono[15]);
void añadirRegistro(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]);
void BorrarAgenda(char nombreArchivo[20]);

int main(){
    //Menu de inicio
    menuInicio();
    do{
    menuAgenda();
    printf("Ingrese opcion\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: MostrarAgendas();
                break;
        case 2: NuevaAgenda(nombreArchivo);
                break;
        case 3: MostrarAgendas();
                selecciondeAgenda();
                lecturaAgenda(nombreArchivo, nombre, apellido, telefono);
                break;
        case 4: MostrarAgendas();
                selecciondeAgenda();
                pedirDatos(nombre, apellido,  telefono);
                añadirrRegistro(nombreArchivo, nombre, apellido, telefono);
                break;
        case 5: MostrarAgendas();
                BorrarAgenda(nombreArchivo);
                break;
        case 6: break;
        default: printf("La opcion elegida no es valida.\n");
    }
    }while(opcion != 6);
    return 0;
}
void menuInicio(){
    printf("--------------------------------------\n");
    printf("----------*AGENDA TELEFONICA*-----------\n");
    printf("--------------------------------------\n"); 
}
void menuAgenda(){
    printf("     Que desea realizar\n");
    printf("Mostrar agendas                  -> 1\n");
    printf("Nueva agendas                   -> 2\n");
    printf("Mostrar registros de una agenda -> 3\n");
    printf("Añadir registro en agenda       -> 4\n");
    printf("Borrar agenda                 -> 5\n");
    printf("salir                           -> 6\n");
}
void MostrarAgendas(){
    printf("Las agendas de contacto son\n");
    system( " ls *.txt" );
}
void NuevaAgenda(char nombreAgenda[]){
    printf("Ingrese el nombre de la agenda que desea crear\n");
    scanf("%s", nombreArchivo);     //familia
    strcat(nombreArchivo, ".txt");
    agenda = fopen(nombreArchivo, "w");
    fclose(agenda);
}
void selecciondeAgenda(){
    printf("Ingrese el nombre de la agenda que desea ver\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
}
void lecturaAgenda(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]){
    //abrir el archivo 
    agenda = fopen(nombreArchivo, "r");
    while(!feof(agenda)){
        fscanf(agenda, "%s %s %s\n", nombre, apellido, telefono);
        printf("%s %s %s\n", nombre, apellido, telefono);
    }
    fclose(agenda);
}
void pedirDatos(char nombre[15], char apellido[15], char telefono[15]){
    //Datos
    printf("Ingrese el nombre del contacto\n");
    scanf("%s", nombre);
    printf("Ingrese el apellido del contacto\n");
    scanf("%s", apellido);
    printf("Ingrese el telefono del contacto\n");
    scanf("%s", telefono);
}
void añadirRegistro(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]){
    agenda = fopen(nombreArchivo, "a");
    fprintf(agenda, "%s %s %s\n", nombre, apellido, telefono);
    fclose(agenda);
}
void BorrarAgenda(char nombreArchivo[20]){
    printf("Ingrese el nombre de la agenda que quiere eliminar\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    //eliminar
    remove(nombreArchivo);
    printf("La agenda que ha seleccionado %s a sido eliminada correctamente!\n", nombreArchivo);
}