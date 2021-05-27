/*Programa 4: Verificar si es par o impar*/
#include <stdio.h>
int main()
{
    char letra;
    printf("\n Introduce la letra");
    scanf("%c", &letra);

    if ( (letra == 'a' || letra == 'A') ||
         (letra == 'e' || letra == 'E') ||
         (letra == 'i' || letra == 'I') ||
         (letra == 'o' || letra == 'O') ||
         (letra == 'u' || letra == 'U')  )
    {
        printf("\n Es una Vocal");
    }
    else
    {
        print("\n No es una Vocal");
    }
    return 0;
}
         

        

          
    

}