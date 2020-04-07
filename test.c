int main()
{
    int n=1;
    int i;
    double a, min, max;

    while(n>0)
    {
        printf("Koliko brojeva zelite da unesete?");
        scanf("%d", &n);

        printf("Unesite prvi realan broj:");
        scanf("%lf",&a);

        min=max=a;

 // fgfgf 
        for(i=2; i<=n; i++)
        {
            printf("Unesite sledeci relan broj:  n=%d,  i=%d : ", n, i);
            scanf("%lf",&a);
            if(a<min) min=a;
            if(a>max) max=a;
        }
        printf("Minimum je: %f\n", min);
        printf("Maksimum je: %f\n", max);

        printf("Da li zelite novi unos? Unesite 0 za kraj ili pozitivan broj za nastavak");
        scanf("%d", &n);
    }
    return 0;
}
