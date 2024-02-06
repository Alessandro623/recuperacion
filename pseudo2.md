Dado una frase que puede contener carecteres alfanúmericos, escriba la frase modificada tal que reemplace todas las vocales por el simbolo '@'. 
Ademas cuente: cantidad los espacios en blancos y la cantidad palabras que tienen mas consonantes que vocales.


ENTRADA:el dia esta nublado.

SALIDA: @l d@@ @st@ n@bl@d@.

La cantidad de palabras que tienen mas consonantes que vocales es:1

Cantida de espacion en blanco:3


ENTRADA: frase = cc con MF = .;
SALIDA: cont_blancos, longuitud_palabras: entero+;
VAR.AUX: cont_conso, cont_voc : entero+;
CONSTANTE:

A0_ INICIALIZAR
A1_ LEER(frase)
A2_ ANALIZAR_FRASE
A3_ ESCRIBIR(cont_blancos, cont_palabras, frase)
A4_ PARAR

    LA PELOTA
A0_ INICIALIZAR
    longuitud_palabras <- 0
    cont_blancos <- 0
    cont_palabras
A2_ ANALIZAR_FRASE
    MIENTRAS(frase <> MF) 
        MIENTRAS(frase <> MF AND FRASE <> ' ')
            longuitud_palabras < longuitud_palabras + 1 
            SI(frase = a AND frase = e AND frase = i AND frase = o AND frase = u AND frase = A AND frase = E AND frase =  I AND frase = O AND frase = U ) ENTONCES 
                frase <-- @
                cont_voc <-- cont_voc + 1 
            SINO
                cont_conso <- cont_conso + 1 
            FIN_SI
            LEER(frase) 
        FIN_MIENTRAS L@ P@L@T@ L@S
        SI(cont_conso > cont_voc) ENTONCES 
            cont_palabras <-- cont_palabras + 1 
        FIN_SI
        longuitud_palabras <- 0
        cont_voc <-- 0
        cont_conso <- 0
        SI(frase <> MF)
            LEER(frase)
        FIN_SI
    FIN_MIENTRAS