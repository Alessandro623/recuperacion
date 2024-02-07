ENTRADA: frase: cc con MF = '.';
SALIDA: cant_palabras: entero;


A0 inicializo
    cant_palabras <---- 0
A1 LEER(frase)
A2 CALCULAR_PALABRAS
A3 ESCRIBIR(cant_palabras)
A4 PARAR


A2 CALCULAR PALABRAS
    MIENTRAS(frase <> MF)
        SI(frase = o) ENTONCES
            leer(frase)
            SI(frase = n) ENTONCES
                leer(frase)
                SI(frase = ' ' o frase = MF) ENTONCES
                    cant_palabras <--- cant_palabras + 1
                FIN SI
            FIN SI
        FIN SI
        Leer(frase)
    FIN MIENTRAS

        
    