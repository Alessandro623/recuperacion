#include <stdio.h>

int main(){

    char frase;
    int cant_palabras = 0;

    printf("Ingrese una frase terminada en '.' = ");

    while (scanf("%c", &frase) == 1 && frase != '.')
    {
        if (frase == 'o')
        {
            scanf("%c", &frase);
            if (frase == 'n')
            {
                scanf("%c", &frase);
                if (frase == ' ' || frase == '.')
                {
                    cant_palabras += 1;
                }
                
            }
            
        }
        scanf("%c", &frase);
    }
    
    printf("palabras con cantidad de ON en terminacion = %d", cant_palabras);
    return 0;
}