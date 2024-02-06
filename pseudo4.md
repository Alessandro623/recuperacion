ENTRADA: frase: cc con MF = '.';
SALIDA: canti_diptongo:entero+;

VAR AUX: contador: entero+;
A0
    inicializar
    contador <--- 0
A1 LEER(frase)
A2 CONTAR_DIP
A3 ESCRIBIR(canti_diptongo)
A4 PARAR

A2 CONTAR_DIP
    MIENTRAS(frase <> MF)
        SI (frase = i OR frase = u) ENTONCES
            leer(frase)
            SI (frase = a OR frase = e OR frase = o)
                contador <--- contador + 1
            FIN SI
        FIN si
        leer(frase)
    FIN MIENTRAS