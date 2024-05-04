//
// Created by mmora on 4/05/2024.
//

#include "funciones.h"
#include "iostream"

using namespace std;

int main(){
    int n_archivos;
    string directorio_pares="";
    string directorio_impares="";

    cout<<"Ingrese la cantidad de archivos que desea crear:";
    cin>>n_archivos;

    crearArchivos(n_archivos);
}
