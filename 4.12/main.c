#include <stdio.h>

/* Maximo comun divisor.
El programa, al recibir como datos dos numeros enteros, calcula el maximo
comun divisor de dichos numeros. */

int mcd(int, int);

void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd (NU1, NU2);
    printf("\nEl maximo comun divisor de %d y %d es: %d", NU1, NU2, RES );
}

int mcd(int N1, int N2)
/* Esta funcion calcula el miximo comun divisor de los numeros N1 Y N2. */
{
    int I;
    if (N1 < N2)
        I = N1 / 2;
    else
        I = N2 / 2;
    /* I se inicializa con el mixmo valor posible que puede ser divisor de N1 Y N2. */
    while((N1 % I) || (N2 % I))
    /* El ciclo se mantiene activo mientras ((NN11 %% II)) o ((NN22 %% II)) sean distintos de cero.
    Cuando el resultado de la evaluaci�n sea 0, el  ciclo se detiene ya que se habr� encontrado el m�ximo com�n divisor. */
    I--;
    return I;
}

