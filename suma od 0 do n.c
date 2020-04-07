#include <stdio.h>
main ()
{
 int Suma=0;
 int i,n;
 printf("Unesite N-ti broj u nizu: ");
 scanf("%d",&n);
 for(i=1;i<n+1;i++)
 {
    Suma=Suma+i;
 }
 printf("Suma je: %d",Suma);
}

________________________________________________________________________________

#include <stdio.h>

main() {

    int unos, suma=0, i;

    printf("Unesite broj n: ");
    scanf("%d", &unos);

    if (unos == 0)
    {
        printf("\nGRESKA\n");
    }

    else
    {
        for(i=0;i<=unos;i++)
        {
            suma = suma + i;
        }

        printf("\nSUMA JE = %d\n",suma);
    }

    return 0;
}
