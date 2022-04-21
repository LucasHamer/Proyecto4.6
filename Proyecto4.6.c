#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,N2,N3,N4;
    printf("Ingrese cuatro numeros enteros donde por lo menos uno sea diferente\n");
    printf("Primer numero: ");
    scanf("%d",&N1);
    printf("Segundo numero: ");
    scanf("%d",&N2);
    printf("Tercer numero: ");
    scanf("%d",&N3);
    printf("Cuatro numero: ");
    scanf("%d",&N4);

    if(N1<N2 && N1<N3 && N1<N4)
    {
        printf("Para los numeros %d %d %d %d\n",N1,N2,N3,N4);
        printf("El primer numero ingresado es el menor: %d",N1);
    }
    else if(N2<N1 && N2<N3 && N2<N4)
    {
        printf("Para los numeros %d %d %d %d\n",N1,N2,N3,N4);
        printf("El segundo numero ingresado es el menor: %d",N2);
    }
    else if(N3<N1 && N3<N2 && N3<N4)
    {
        printf("Para los numeros %d %d %d %d\n",N1,N2,N3,N4);
        printf("El tercer numero ingresado es el menor: %d",N3);
    }
    else if(N4<N1 && N4<N2 && N4<N3)
    {
        printf("Para los numeros %d %d %d %d\n",N1,N2,N3,N4);
        printf("El cuarto numero ingresado es el menor: %d",N4);
    }
    else
    {
        printf("Los cuatro numeros son iguales");
    }

    return 0;
}
