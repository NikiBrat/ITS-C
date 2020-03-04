#include <stdio.h>
#include <math.h>
#define PI 3.14
main()
{
	double x1, y1, x2, y2, x3, y3, a, b, c, alfa, beta, gama;
	int izraz = 0;
	printf("Unesite koordinate tacke A(x,y): ");
	scanf("%lf%lf", &x1, &y1);
	printf("Unesite koordinate tacke B(x,y): ");
	scanf("%lf%lf", &x2, &y2);
	printf("Unesite koordinate tacke C(x,y): ");
	scanf("%lf%lf", &x3, &y3);

	a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	printf("Stranica a je: %f", a);
    printf("Stranica b je: %f", b);
    printf("Stranica c je: %f", c);

	/*Racunanje uglova*/

	izraz = (a >= (b + c)) || (b >= (a + c)) || (c >= (a + b));
	if (izraz == 0)
	{
		alfa = acos((b * b + c * c - a * a) / (2 * b * c));
		beta = acos((c * c + a * a - b * b) / (2 * c * a));
		gama = acos((a * a + b * b - c * c) / (2 * a * b));
		alfa *= 180 / PI;
		beta *= 180 / PI;
		gama *= 180 / PI;
		printf("\nAlfa = %.2f \nBeta = %.2f \nGama = %.2f", alfa, beta, gama);
	}
	else
		printf("Ne moze se napraviti trougao");
}
