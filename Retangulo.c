#include <stdio.h>
#include <math.h>
    double base,alt, area,per,dig;
    int main()
{
        printf("Digite a Base e Altura do retangulo:\n");
        scanf("%lf %lf", &base, &alt);
            area=base*alt;
            per=2*(base+alt);
            dig=sqrt(pow(base, 2.0)+pow(alt, 2.0));
                printf("Area:%.4lf\n", area);
                printf("Perimetro:%.4lf\n", per);
                printf("Diagonal:%.4lf\n", dig);
    return 0;
}