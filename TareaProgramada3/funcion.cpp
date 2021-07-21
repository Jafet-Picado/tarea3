/*
 * Clase encargada del manejo de funciones / Pertenece al modelo
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#include "funcion.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

/*
 * Constructor de la clase Función encargada de inicializar el objeto de la clase Lista
 */
Funcion::Funcion()
{
    lista = new Lista();
}

/*
 * Método encargado de separar los minTerminos de la función y añadirlos a la lista
 *
 * Args: Recibe un parametro de tipo string con la función ingresada por el usuario
 */
void Funcion::agregarMinTerminos(string hilera){
    this->hilera=hilera;
    this->hileraG+=getDate()+" / f(a,b,c,d)= "+hilera+"\n"; //Se almacena la función con hora y fecha de ingreso en una variable string
    char arr[hilera.length()];
    for(string::size_type x = 0; x < hilera.length(); x++) {
        arr[x] = hilera[x]; //Se convierte toda la función a un array de tipo char
    }
    char* min = strtok(arr, "+"); //Se separa la hilera con el primer +
    lista->agregarDato(min);
    while(min!=NULL){ //Siempre que la hilera no haya acabado, no dejará de separar minTerminos
        min=strtok(NULL,"+"); //El llamado a strtok cambia al no ser la primera vez
        if(min!=NULL){ //El valor se ingresará a la lista únicamente si no es null
            lista->agregarDato(min);
        }
    }
}

/*
 * Método encargado de evaluar la función ingresada por el usuario con los valores de verdad dados por el mismo
 *
 * Args: Recibe cuatro parametros de tipo bool con los valores de verdad asociados a cada variable
 * Return: Retorna el resultado de la evaluación
 */
bool Funcion::evaluar(bool a, bool b, bool c, bool d){
    bool arr[lista->longitud()];
    int contador = 0;
    while(contador < lista->longitud()){
        bool resultado = false;
        string s = lista->iesimo(contador+1)->getDato();
        for(string::size_type x = 0; x < s.length(); x++){
            char p = s[x];
            char n;
            if(x<s.length()){
                n = s[x+1];
            }
            if(x==0){
                if(p=='A'){
                    if(n!='\''){
                        resultado = a;
                    }else{
                        resultado = !a;
                    }
                }
                if(p=='B'){
                    if(n!='\''){
                        resultado = b;
                    }else{
                        resultado = !b;
                    }
                }
                if(p=='C'){
                    if(n!='\''){
                        resultado = c;
                    }else{
                        resultado = !c;
                    }
                }
                if(p=='D'){
                    if(n!='\''){
                        resultado = d;
                    }else{
                        resultado = !d;
                    }
                }
            }
            if(x>0){
                if(p=='A'){
                    if(n!='\''){
                        resultado = resultado && a;
                    }else{
                        resultado = resultado && !a;
                    }
                }
                if(p=='B'){
                    if(n!='\''){
                        resultado = resultado && b;
                    }else{
                        resultado = resultado && !b;
                    }
                    }
                }
                if(p=='C'){
                    if(n!='\''){
                        resultado = resultado && c;
                    }else{
                        resultado = resultado && !c;
                    }
                }
                if(p=='D'){
                    if(n!='\''){
                        resultado = resultado && d;
                    }else{
                        resultado = resultado && !d;
                    }
                }
            }
        arr[contador] = resultado;
        contador++;
    }
    bool evaluar=arr[0];
    int x = 1;
    while(x<lista->longitud() && lista->longitud()>1){
        evaluar+=arr[x];
        x++;
    }
    if(evaluar){
        hileraF+=getDate()+" / f(a,b,c,d)= "+hilera+" = 1\n";
    }else{
        hileraF+=getDate()+" / f(a,b,c,d)= "+hilera+" = 0\n";
    }
    return evaluar;
}

/*
 * Método encargado de retornar una hilera de texto con la fecha y hora exacta del momento de su llamado
 *
 * Return: Retorna un string con la fecha y hora exacta
 */
string Funcion::getDate(){
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y.%X", &tstruct);
    return buf;
}
