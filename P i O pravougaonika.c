#include <stdio.h>
main ()
{
 int Pov,Obim,A,B;
 printf("Unesite vrednosti A i B: ");
 scanf("%d%d",&A,&B);
 Pov=A*B;
 Obim=A*2+B*2;
 printf("Povrsina i Obim su %d i %d",Pov,Obim);
}

_________________________________________________________________________

#include <stdio.h>

int main() {

    int stranica_a, stranica_b, povrsina, obim;

    printf("Unesite stranicu a:\n");
    scanf("%d", &stranica_a);

    printf("Unesite stranicu b:\n");
    scanf("%d", &stranica_b);

    povrsina = stranica_a * stranica_b;
    obim = stranica_a * 2 + stranica_b * 2;

    printf("Povrsina je: %d\n, obim je: %d\n", povrsina, obim);

    return 0;
}

_____________________________________________________________________________

#include <stdio.h>

main()
{

    int stranica_a, stranica_b, povrsina, obim;

    printf("Unesite stranicu a: ");
    scanf("%d", &stranica_a);

    printf("\nUnesite stranicu b: ");
    scanf("%d", &stranica_b);

    povrsina = stranica_a * stranica_b;
    obim = (stranica_a * 2) + (stranica_b *2 );

    printf("\n\nPovrsina je: %d, a obim je: %d!\n\n", povrsina, obim);

    return 0;
}