//
// Created by mmora on 4/05/2024.
//

#ifndef INC_2024_PARCIAL2_MORALES_MAIN_H
#define INC_2024_PARCIAL2_MORALES_MAIN_H

#endif //INC_2024_PARCIAL2_MORALES_MAIN_H

#include "iostream"
#include "fstream"
#include "windows.h"
using namespace std;

int contarArchivosPares(){
    WIN32_FIND_DATA findFileData;
    HANDLE          hFind;
    int cantidadDeArchivos=0;
    hFind = FindFirstFile("C:/Users/mmora/Desktop/par/*", &findFileData);

    if (hFind == INVALID_HANDLE_VALUE){
        cout << "Ruta incorrecta" << endl;
    }else{
        while (FindNextFile(hFind, &findFileData)!=0){
            cantidadDeArchivos=cantidadDeArchivos+1;
        }
    }
    return cantidadDeArchivos-1;
}

int contarArchivosImpares(){
    WIN32_FIND_DATA findFileData;
    HANDLE          hFind;
    int cantidadDeArchivos=0;
    hFind = FindFirstFile("C:/Users/mmora/Desktop/impar/*", &findFileData);

    if (hFind == INVALID_HANDLE_VALUE){
        cout << "Ruta incorrecta" << endl;
    }else{
        while (FindNextFile(hFind, &findFileData)!=0){
            cantidadDeArchivos=cantidadDeArchivos+1;
        }
    }
    return cantidadDeArchivos-1;
}

void agregarTexto(){
    cout << "Agregando texto..." << endl;
}

void crearArchivos(int cantidad) {
    string nombreArchivo = "file";
    if (cantidad % 2 == 0) {
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/mmora/Desktop/par/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i + 1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosPares();
    } else {
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/mmora/Desktop/impar/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i + 1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosImpares();
    }
}