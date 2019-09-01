#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
    1006 - Iniciante
        A -> peso: 2
        B -> peso: 3
        C -> peso: 5
    */

    /*double A, B, C, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA = (A * 2 + B * 3 + C * 5)/10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;*/

    /**
    1007 - Iniciante
    */

    /*int A, B, C, D, DIFERENCA;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;*/

    /**
    1008 - Iniciante
    */
    /*int num, horas;
    float valorHora;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%f", &valorHora);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, (valorHora*horas));
    return 0;*/

    /**
    1009 - Iniciante
    */
    /*char nome[30];
    double salarioFixo, totalVendas;
    scanf("%s", &nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);
    printf("TOTAL = R$ %.2lf\n", (salarioFixo + 0.15*totalVendas));
    return 0;*/

    /**
    1010 - Iniciante
    */
    /*int codPeca1, numPecas1, codPeca2, numPecas2;
    float valUnitPeca1, valUnitPeca2;
    scanf("%d %d %f", &codPeca1, &numPecas1, &valUnitPeca1);
    scanf("%d %d %f", &codPeca2, &numPecas2, &valUnitPeca2);
    printf("VALOR A PAGAR: R$ %.2f\n", (numPecas1 * valUnitPeca1 + numPecas2 * valUnitPeca2));
    return 0;*/

    /**
    1011 - Iniciante
    */
    /*double raio, pi = 3.14159;
    scanf("%lf", &raio);
    printf("VOLUME = %.3f\n", ((4.0/3)* pi * pow(raio, 3))); //printf("VOLUME = %.3f\n", ((4.0/3)* pi * raio * raio * raio));
    return 0;*/

    /**
    1012 - Iniciante
    */
    /*double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", ((A*C)/2), (pi * pow(C,2)), (((A + B)*C)/2), (B*B), (A*B));
    return 0;*/

    /**
    1013 - Iniciante
    */
    /*int A, B, C;
    int maior;
    scanf("%d %d %d", &A, &B, &C);
    maior = (A + B + abs(A - B))/2;
    maior = (maior + C + abs(maior - C))/2; ///Comparando com o C
    printf("%d eh o maior\n", maior);
    return 0;*/

    /**
    1014 - Iniciante
    */
    /*int X;
    float Y;
    scanf("%d", &X);
    scanf("%f", &Y);
    printf("%.3f km/l\n", (X/Y));
    return 0;*/

    /**
    1015 - Iniciante
    */
    /*float x1,x2,y1,y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%.4f\n", sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2)));
    return 0;*/

    /**
    1016 - Iniciante
    distance em km
    | Km | Tempo      |
    | 30 | 60 minutos |
    */
    /*int distance;
    scanf("%d", &distance);
    printf("%d minutos\n", (distance * 60)/30);
    return 0;*/

    /**
    1017 - Iniciante
    Automovel faz 12 KM/L
    * OBS: Considerar 12.0 pra forçar a operação pra resultar em float
    */
    /*int tempo;
    int velMedia;
    scanf("%d", &tempo);
    scanf("%d", &velMedia);
    printf("%.3f\n", ((velMedia * tempo)/12.0));
    return 0;*/

    /**
    1018 - Iniciante
    -> Interessante pois trabalha com divisão inteira de um número
    */
    /*int N;
    scanf("%d", &N);
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", N/100);
    N = N - 100*(N/100);
    printf("%d nota(s) de R$ 50,00\n", N/50);
    N = N - 50*(N/50);
    printf("%d nota(s) de R$ 20,00\n", N/20);
    N = N - 20*(N/20);
    printf("%d nota(s) de R$ 10,00\n", N/10);
    N = N - 10*(N/10);
    printf("%d nota(s) de R$ 5,00\n", N/5);
    N = N - 5*(N/5);
    printf("%d nota(s) de R$ 2,00\n", N/2);
    N = N - 2*(N/2);
    printf("%d nota(s) de R$ 1,00\n", N/1);
    return 0;*/

    /**
    1019 - Iniciante
    -> Importancia da utilização de mais variáveis pode facilitar o problema
    -> Divisão inteira
    */
    ///Opcao 1
    /*int N, H, M, S;
    scanf("%d", &N);
    H = N/3600;
    M = (N - H * 3600)/60;
    S = (N - H * 3600 - M * 60);
    printf("%d:%d:%d\n", H, M, S);*/
    ///Opcao 2
    /*int N;
    scanf("%d", &N);
    printf("%d:%d:%d\n", (N/3600), (N - (N/3600) * 3600)/60, (N - (N/3600) * 3600 - ((N - (N/3600) * 3600)/60) * 60) );
    return 0;*/

    /**
    1020 - Iniciante
    -> idade em dias
    */
    ///Opcao 1
    int idade;
    scanf("%d", &idade);
    int ano = (idade/365);
    int mes = (idade - 365*(idade/365))/30;
    int dia = idade - ano * 365 - mes * 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
