#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Atividade:
Pedir para o usu�rio digitar a quantidade de n�meros pares que ele deseja.
*/
int main()
{
        setlocale(LC_ALL, "Portuguese");

   int i, n;

    printf("Digite quantos n�meros pares voc� deseja: ");

    scanf("%d", &n);

    printf("Os n�meros pares s�o:\n");


for (i=1; i<=n ; i++) {

         printf ("%d, ", i*2);
}


    return 0;
}
