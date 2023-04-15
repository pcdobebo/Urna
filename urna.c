#include <stdio.h>
int main(){
    int voto, cont_1, cont_2, cont_3, cont_4, cont_5, cont_6, total, fim;
    float porc_nulo, porc_branco;
    cont_1 = 0;
    cont_2 = 0;
    cont_3 = 0;
    cont_4 = 0;
    cont_5 = 0;
    cont_6 = 0;

    total = 0;
    fim = 0;
    printf("Informe seu voto\n1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Candidato 4\n5 - Voto Nulo\n6 - Voto Branco\n");
    do{
        scanf("%d", &voto);
        switch(voto){
            case 1:
                cont_1++;
            break;
            case 2:
                cont_2++;
            break;
            case 3:
                cont_3++;
            break;
            case 4:
                cont_4++;
            break;
            case 5:
                cont_5++;
            break;
            case 6:
                cont_6++;
            break;
            case 0:
                fim = 1;
            break;
            default:
                printf("Voto inválido");
        }
    }while(fim < 1);
    total = cont_1 + cont_2 + cont_3 + cont_4 + cont_5 + cont_6;   
    printf("\nA quantidade total de votos: %d\n", total);
    printf("Total de votos para candidado 1: %d\n", cont_1);
    printf("Total de votos para candidado 2: %d\n", cont_2);
    printf("Total de votos para candidado 3: %d\n", cont_3);
    printf("Total de votos para candidado 4: %d\n", cont_4);
    printf("Total de votos nulos: %d\n", cont_5);
    printf("Total de votos em branco: %d\n", cont_6);
    porc_nulo = (cont_5 * 100) / total;
    printf("A porcentagem de votos nulos: %.2f %%\n", porc_nulo);
    porc_branco = (cont_6 * 100) / total;
    printf("A porcentagem de votos em branco: %.2f %%\n", porc_branco);

    return 0;
}