#include <stdio.h>

int main(){

    int cuil;
    char sexoPersona;
    int numero1 = 0;
    int numero2 = 0;


    printf("Ingrese el cuil de la persona\n=");
    scanf("%d", &cuil);

    while (cuil != 0)
    {
        for (int i = 0; i < 2; i++)
        {
            scanf("%d", &cuil);
            if(cuil == 2){
                scanf("%d", &cuil);
                if (cuil == 0)
                {
                    sexoPersona = 'v';
                } else if(cuil == 7){
                    sexoPersona = 'm';
                }
                
            }
        }
        scanf("%d", &cuil);
    }
    

    return 0;
}