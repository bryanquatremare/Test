#include <stdio.h>
#include <stdlib.h>

int addition (int a, int b)
{
    return a+b;
}

int soustraction (int a, int b)
{
    return a-b;
}

int main()
{
    int op;
    printf("Choisis le signe de ton opération\n");
    scanf("%d", &op);
    if(op == +)

        printf("Voilà ton résultat fdp %d\n", addition(1,4));
    else
        printf("Voilà ton résultat fdp %d\n", soustraction(1,4));
    return 0;
}
