#include <stdio.h>

    double lar,com,mq,area,pre;
    int main() 
{

        printf("Digite a largura e o comprimento do terreno:\n");
        scanf("%lf %lf", &lar, &com);
        printf("Digite o valor por metros quadrados:\n");
        scanf("%lf", &mq);
            area=lar*com;
            pre=area*mq;
                printf("Area do terreno:%.2lf\n", area);
                printf("Preco do terreno:%.2lf\n", pre);

    return 0;
}