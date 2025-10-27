#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long a, b;
    printf("Entrez deux entiers (a b) : ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        fprintf(stderr, "Lecture des entiers echouee.\n");
        return 1;
    }

    /* travailler avec les valeurs absolues */
    if (a < 0) a = llabs(a);
    if (b < 0) b = llabs(b);

    if (a == 0 && b == 0) {
        printf("PGCD indetermine pour 0 et 0.\n");
        return 0;
    }

    printf("Calcul du PGCD de %lld et %lld (algorithme d'Euclide) :\n", a, b);

    while (b != 0) {
        long long q = a / b;
        long long r = a % b;
        printf("%lld = %lld * %lld + %lld\n", a, q, b, r);
        a = b;
        b = r;
    }

    printf("PGCD = %lld\n", a);
    return 0;
}