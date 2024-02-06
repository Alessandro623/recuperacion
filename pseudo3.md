ENTRADA: cuil: entero;
SALIDA: sexo_persona;
VAR AUX: numero1, numero2: entero+;
A1 LEER(cuil)
A2 VERIFICAR_SEXO
A3 ESCRIBIR(sexo_persona)
A4 PARAR

A2 VERIFICAR_SEXO
    MIENTRAS(cuil <> 00000)
        HACER 2 VECES
            leer(cuil)
            SI(cuil = 2) ENTONCES
                leer(cuil)
                SI (cuil = 0) ENTONCES
                    sexo_persona <--- varon
                SINO SI(cuild = 7) ENTONCES
                    sexo_persona <--- mujer
                FIN SI
            FIN SI
        FIN HACER
        leer(cuil)
    FIN MIENTRAS