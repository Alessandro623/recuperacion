Julia, encargada de ventas de ropa en una feria, quiere lanzar una serie de descuentos para incentivar
    al publico comprador y atraer nuevos clientes.

    la ropa que vende pertenece a 3 categorias: 1: invierno, 2:verano, 3: multiestacion.
    las formas de pago son: 1: efectivo, 2:debito, 3:tarjeta de credito.

    para calcular el monto final a pagar por un producto, julia propone los siguientes descuentos
    sobre el precio lista o base:

    -   Si el producto es de invierno y se vende entre los meses de septiembre y marzo tienen un descuento
        del 30% sobre el precio lista.
    -   Si el producto es de verano y se vende entre los meses de abril y agosto tienen un descuento
        del 35 % sobre el precio lista.
    -   Para los productos multiestacion el descuento es de 20% sobre el precio lista.

    a la hora de pagar segun la forma de pagom si se paga en efectivo tiene un descuento del 10%
    si abona con debito tiene un 5% de descuento, pero si paga con tareta de credito tiene un recargo
    del un 5% sobre el monto total.

    Realice un algoritmo para el problema de julia tal que ingrese el monto base de la prenda, el mes,
    la categoria y la forma de pago. luego calcule el monto final a pagar por el cliente.
    debe incluir al menos una funcion para el calculo de descuento por categoria y una funcion 
    para el descuento segun la forma de pago.

    ENTRADA: ropa: entero {1: invierno, 2: verano, 3: multiestacion}; mdp: entero {1: efectivo, 2:debito, 3: tarjeta de credito}; mes: entero; monto_base: real+;
    SALIDA: monto_final: real+;
    VAR.AUX: 
    CONSTANTES:
        DESCUENTO1 = 30
        DESCUENTO2 = 35
        DESCUENTO3 = 20
        DESCUENTO4 = 10
        DESCUENTO5 = 5

    A1_ LEER(ropa, mdp, mes, monto_base)
    A2_ CALCULAR_MONTO_FINAL
    A3_ ESCRIBIR(monto_final)
    A4_ PARAR

    A2_ CALCULAR_MONTO_FINAL
        monto_final <-- calcularDescuentoCategoria(ropa, monto_base, mes)
        monto_final <-- calcularDescuentoMDP(mdp, monto_final)

    FUNCION calcularDescuentoCategoria(ropa, monto_base, mes) entero, entero -> real
        aux <-- 0
        SI (ropa = 1 AND 9 <= mes AND 3 >= mes AND) ENTONCES
            aux <-- monto_base - (monto_base *  DESCUENTO1 / 100)
        SINO SI (ropa = 2 AND mes >= 4 AND mes <= 8) ENTONCES
            aux <-- monto_base - (monto_ base * DESCUENTO2 / 100)
        SINO SI (ropa = 3) ENTONCES 
            aux <-- monto_base - (monto_base * DESCUENTO3 / 100)
        FIN_SI
        retorna aux
    FIN_FUNCION

    FUNCION calcularDescuentoMDP(mdp, monto_base) entero, entero -> real+
        monto <-- 0
        SI(mdp = 1) ENTONCES
            monto <-- monto_base - (monto_base * DESCUENTO4 / 100)
        SINO SI(mdp = 2) ENTONCES
            monto <-- monto_base - (monto_base * DESCUENTO5 / 100)
        SINO
            monto <-- monto_base + (monto_base * DESCUENTO5 / 100)
        retorna monto
    FIN_FUNCION