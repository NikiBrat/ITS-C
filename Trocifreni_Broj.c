#include <stdio.h>
#include <math.h>
main()
{
	int a, b, c, tb;
	double k;
	printf("Trocifreni brojevi koji su jednaki zbiru kubova svojih cifara su:\n");
	
	for (tb = 100; tb< 999; tb++)
	{
		a = tb / 100; 
		b = tb % 100 / 10; 
		c = tb % 10; 
		k = pow(a, 3) + pow(b, 3) + pow(c, 3); 
		if (tb == k)

	    printf("%d ", tb);
	}
}
