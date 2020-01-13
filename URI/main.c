#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /**
    1001 - Iniciante (Extremamente Básico)
    */

    /*int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    printf("X = %d\n", (A+B));
    return 0;*/

    /**
    1002 - Iniciante (Área do Círculo)
        OBS: a função "pow" já está inserida dentro da própria biblioteca <stdio.h>
    */

    /*double raio, pi = 3.14159;
    scanf("%lf", &raio);
    printf("A=%.4lf\n", (pi * raio * raio)); ///OUTRA ALTERNATIVA (pi * pow(raio,2))
    return 0;*/

    /**
    1003 - Iniciante (Soma Simples)
    */

    /*int A, B, SOMA;
    scanf("%d", &A);
    scanf("%d", &B);
    SOMA = A + B;
    printf("SOMA = %d\n", SOMA);
    return 0;*/

    /**
    1004 - Iniciante (Produto Simples)
    */

    /*int A, B, PROD;
    scanf("%d", &A);
    scanf("%d", &B);
    PROD = A * B;
    printf("PROD = %d\n", PROD);
    return 0;*/

    /**
    1005 - Iniciante (Média 1)
        Utiliza Média ponderada
        A -> peso: 3.5
        B -> peso: 7.5
        Total = 11
    */

    /*double A, B, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    MEDIA = (A * 3.5 + B * 7.5)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;*/

    /**
    1006 - Iniciante (Média 2)
        Utiliza Média ponderada
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
    1007 - Iniciante (Diferença)
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
    1008 - Iniciante (Salário)
    */

    /*int num, horas;
    float valorHora;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%f", &valorHora);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, (valorHora*horas));
    return 0;*/

    /**
    1009 - Iniciante (Salário com Bônus)
    */

    /*char nome[30];
    double salarioFixo, totalVendas;
    scanf("%s", &nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);
    printf("TOTAL = R$ %.2lf\n", (salarioFixo + 0.15*totalVendas));
    return 0;*/

    /**
    1010 - Iniciante (Cálculo Simples)
    */

    /*int codPeca1, numPecas1, codPeca2, numPecas2;
    float valUnitPeca1, valUnitPeca2;
    scanf("%d %d %f", &codPeca1, &numPecas1, &valUnitPeca1);
    scanf("%d %d %f", &codPeca2, &numPecas2, &valUnitPeca2);
    printf("VALOR A PAGAR: R$ %.2f\n", (numPecas1 * valUnitPeca1 + numPecas2 * valUnitPeca2));
    return 0;*/

    /**
    1011 - Iniciante (Esfera)
    */

    /*double raio, pi = 3.14159;
    scanf("%lf", &raio);
    printf("VOLUME = %.3f\n", ((4.0/3)* pi * pow(raio, 3))); //printf("VOLUME = %.3f\n", ((4.0/3)* pi * raio * raio * raio));
    return 0;*/

    /**
    1012 - Iniciante (Área)
    OBS: EXERCÍCIO BEM COMPLETO DE OPERAÇÕES MATEMÁTICAS
    */

    /*double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", ((A*C)/2), (pi * pow(C,2)), (((A + B)*C)/2), (B*B), (A*B));
    return 0;*/

    /**
    1013 - Iniciante (O Maior)
    */

    /*int A, B, C;
    int maior;
    scanf("%d %d %d", &A, &B, &C);
    maior = (A + B + abs(A - B))/2;
    maior = (maior + C + abs(maior - C))/2; ///Comparando com o C
    printf("%d eh o maior\n", maior);
    return 0;*/

    /**
    1014 - Iniciante (Consumo)
    */

    /*int X;
    float Y;
    scanf("%d", &X);
    scanf("%f", &Y);
    printf("%.3f km/l\n", (X/Y));
    return 0;*/

    /**
    1015 - Iniciante (Distância Entre Dois Pontos)
    OBS: Utiliza raizes e potências
    */

    /*float x1,x2,y1,y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%.4f\n", sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2)));
    return 0;*/

    /**
    1016 - Iniciante (Distância)
    distance em km
    | Km | Tempo      |
    | 30 | 60 minutos |
    */

    /*int distance;
    scanf("%d", &distance);
    printf("%d minutos\n", (distance * 60)/30);
    return 0;*/

    /**
    1017 - Iniciante (Gasto de Combustível)
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
    1018 - Iniciante (Cédulas)
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
    1019 - Iniciante (Conversão de Tempo)
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
    1020 - Iniciante (Idade em Dias)
    */

    /*int idade;
    scanf("%d", &idade);
    int ano = (idade/365);
    int mes = (idade - 365*(idade/365))/30;
    int dia = idade - ano * 365 - mes * 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;*/

    /**
    *   1142 - Iniciante (PUM)
    */

    /*int N;
    scanf("%d",&N);
    int i = 0;
    int j = 0, count = 1;
    for(i = 0; i < N; i++){
        for(j = 0; j < 4; j++){
            if(j == 3){
                printf("PUM\n");
            }
            else{
                printf("%d ", count);
            }
            count++;
        }
    }
    return 0;*/

    /**
    *   1858 - Iniciante (A Resposta de Theon)
    */
    /*int N, i, T, menorT, menorTInidice;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        if(i == 0){
            scanf("%d", &T);
            menorTInidice = i+1;
            menorT = T;
        }
        else{
            scanf("%d", &T);
            if(T < menorT){
                menorTInidice = i+1;
                menorT = T;
            }
        }
    }
    printf("%d\n", menorTInidice);
    return 0;*/

    /**
    *   1858 - Iniciante (A Resposta de Theon)
    */

    /*int N, i, T, menorT, menorTInidice;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        if(i == 0){
            scanf("%d", &T);
            menorTInidice = i+1;
            menorT = T;
        }
        else{
            scanf("%d", &T);
            if(T < menorT){
                menorTInidice = i+1;
                menorT = T;
            }
        }
    }
    printf("%d\n", menorTInidice);
    return 0;*/

    /**
    *   2373 - Iniciante (Garçom)
    */

    /*int N, i, L, C, coposQuebrados = 0;
    //Deixa copo cair se o numero de latas for maior que copos
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %d", &L, &C);
        if(L > C){
            coposQuebrados += C;
        }
    }
    printf("%d\n", coposQuebrados);
    return 0;*/

    /**
    *   2544 - Iniciante (Kage Bushin no Justu)
    */

    /*int N;
    //Determinar número de cópias
    while(scanf("%d", &N) != EOF){
        int a = log2(N);
        printf("%d\n", a);
    }
    return 0;*/

    /**
    *   2547 - Iniciante (Kage Bushin no Justu)
    */

    /*int N, AMin, AMax, Ai;
    while(scanf("%d %d %d", &N, &AMin, &AMax) != EOF){
        int i = 0, qtd = 0;
        for(i = 0; i < N; i++){
            scanf("%d", &Ai);
            if((AMin <= Ai) && (Ai <= AMax)){
                qtd++;
            }
        }
        printf("%d\n", qtd);
    }
    return 0;*/


    /**
    *   1174 - Iniciante (Seleçao em Vetor I) -- VETORES
    */

    /*double A[100];
    int i = 0;
    for(i = 0; i < 100; i++){
        scanf("%lf", &A[i]);
    }

    for(i = 0; i < 100; i++){
        if(A[i] <= 10){
            printf("A[%d] = %.1lf\n", i, A[i]);
        }
    }
    return 0;*/

    /**
    *   1172 - Iniciante (Substituição em Vetor I) -- VETORES
    */

    /*int X[10];
    int i = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &X[i]);
    }

    /// Mudando valor
    for(i = 0; i < 10; i++){
        if(X[i] <= 0){
            X[i] = 1;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;*/

    /**
    *   1173 - Iniciante (Preenchimento de Vetor I) -- VETORES
    */

    /*int V, N[10];
    scanf("%d", &V);
    N[0] = V;               ///Atribuindo a primeira posição
    printf("N[0] = %d\n", N[0]);
    int i = 0;
    for(i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;*/

    /**
    *   1035 - Iniciante (Teste de Seleção 1) --- CONDICIONAL
    */

    /*int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    if((B > C) && (D > A) && (C + D > A + B) && ((C > 0) && (D > 0))){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;*/

    /**
    *   1036 - Iniciante (Formula de Bhaskara) --- Operadores aritméticos (Pow e squirt)
    */
    /*double delta, A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    delta = pow(B, 2) - 4 * A * C;
    if(delta < 0 || A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", ((-B + pow(delta, 0.5))/(2*A)));
        printf("R2 = %.5lf\n", ((-B - pow(delta, 0.5))/(2*A)));
    }
    return 0;*/
}
