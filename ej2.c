#include <stdio.h>
int main(){
    int cantBlancos = 0;
    int cantVocal = 0;
    int cantConso = 0;
    char frase;
    scanf("%c", &frase);

    while (frase != '.')
    {
        while (frase != '.' && frase != ' ')
        {
            if (frase == 'a' || frase == 'e' || frase == 'i' || frase == 'o'|| frase == 'u')
            {
                frase = '@';
                cantVocal++;
            } else {
                cantConso++;
            }
            printf("%c", frase);
            scanf("%c", &frase);

            if (frase == ' ')
            {
                cantBlancos++;
                printf(" ");
                scanf("%c", &frase);
            }
        }
    } 
    printf("\ncantidad de espacios en blanco = %d", cantBlancos);
    printf("\ncantidad de vocales = %d", cantVocal);
    printf("\ncantidad de consonantes =%d", cantConso);
    return 0;
}