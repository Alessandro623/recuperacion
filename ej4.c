#include <stdio.h>

int main(){
    int contador = 0;
    char frase;
    scanf("%c", &frase);

    while (frase != '.')
    {
        if (frase == 'i' || frase == 'u')
        {
            scanf("%c", &frase);
            if (frase == 'a' || frase == 'e' || frase == 'o')
            {
                contador += 1;
            }
            
        }
        scanf("%c", &frase);
    }
    
    printf("\ncantidad de diptongos %d", contador);

    return 0;
}