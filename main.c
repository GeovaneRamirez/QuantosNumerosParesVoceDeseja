#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Atividade:
Pedir para o usuário digitar a quantidade de números pares que ele deseja.
*/
int main()
{
        setlocale(LC_ALL, "Portuguese");

   int i, n;

    printf("Digite quantos números pares você deseja: ");

    scanf("%d", &n);

    printf("Os números pares são:\n");


for (i=1; i<=n ; i++) {

         printf ("%d, ", i*2);
}


    return 0;
}
