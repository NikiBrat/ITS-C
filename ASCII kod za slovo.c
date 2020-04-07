#include <stdio.h>

main () {

    char slovo;

    printf("Unesite slovo: ");

    scanf("%c", &slovo);

    printf("\n\nASCII kod za slovo ## %c ## je ## %d ##\n\n\n", slovo, slovo);

    return 0;

}
