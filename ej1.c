#include <stdio.h>
#define DESC1 30
#define DESC2 35
#define DESC3 20
#define DESC4 10
#define DESC5 5

float calcularDescuentoCategoria(int tipoRopa,int montoBase,int mes);
float calcularDescuentoMDP(int formaPago,int montoBase);

int main(){
    int tipoRopa;
    int formaPago;
    int montoBase;
    int mes;

    printf("Ingrese el tipo de ropa 1: invierno, 2: verano, 3:multiestacion\n=");
    scanf("%d", &tipoRopa);
    
    printf("Ingrese el tipo de pago 1: efectivo, 2: debito, 3:tarjeta de credito\n=");
    scanf("%d", &formaPago);

    printf("Ingrese el mes\n=");
    scanf("%d", &mes);

    printf("Ingrese el monto base:\n=");
    scanf("%d", &montoBase);

    float prueba1 = calcularDescuentoCategoria(tipoRopa, montoBase, mes);
    float prueba2 = calcularDescuentoMDP(formaPago, montoBase);

    printf("%f", prueba1);
    printf("%f", prueba2);

    return 0;
}

float calcularDescuentoCategoria(int tipoRopa,int montoBase,int mes){
    int aux = 0;

    if (tipoRopa = 1 && 9 <= mes && 3 >= mes)
    {
        aux = montoBase - (montoBase *  DESC1 / 100);
    } else if(tipoRopa = 2 && mes >= 4 && mes <= 8){
        aux = montoBase - (montoBase *  DESC2 / 100);
    } else if(tipoRopa = 3 && mes >= 4 && mes <= 8){
        aux = montoBase - (montoBase * DESC3 / 100);
    }
    return aux;
}

float calcularDescuentoMDP(int formaPago,int montoBase){
    int monto = 0;
    if (formaPago = 1)
    {
        monto = montoBase - (montoBase *  DESC4 / 100);
    } else if (formaPago = 2)
    {
        monto = montoBase - (montoBase *  DESC5 / 100);
    } else {
         monto = montoBase + (montoBase *  DESC5 / 100);
    }

    return monto;
}
