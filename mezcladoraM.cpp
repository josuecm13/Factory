#include "mezcladoram.h"

MezcladoraMasa::MezcladoraMasa(){
    ups = cantidad = min = max = 0;
}

MezcladoraMasa::MezcladoraMasa(int min, int max){
    minimo = min;
    maximo = max;
}

void MezcladoraMasa::insertarMasa(int cant){
    cantidad += cant;
}

Masa* MezcladoraMasa::procesa(){
    cantidad -= ups;
    return new Masa(ups);
}