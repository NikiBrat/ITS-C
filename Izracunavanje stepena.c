#include <stdio.h>

main () {
     // Izracunavanje stepena mnozenjem
     int i, n, x, z=1;
     printf("Unesite operand:");
     scanf("%d",&x);
     z=x;
     printf("\nUnesite stepen:");
     scanf("%d",&n);
     printf("\nUneli ste Operand: %d, Stepen: %d", x,n);
     for (i=1;i<n;i++) {
         z=z*x;
     }
     printf("\nRezultatt je: %d", z);
     return 0;
}
