#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]= "NOME DO ALUNO";

    //nome aqui
    char name1[]= "LUCAS ALEXSANDRO LEAL DOS SANTOS:";

    char str2[]= "MATRICULA";

    //matricula aqui
    char * matri1= "(202207040035)";

    char divisoria[]= "------------------------------------";
    char divisoria2[]= " --------------";

    printf(" \t %s \t", str);
    printf("\t\t %s \n\n", str2);
    printf("%s \t", divisoria);
    printf("%s \n", divisoria2);
    printf("%s \t %s \n", name1, matri1);

    return 0;
}
