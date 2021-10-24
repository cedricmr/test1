#include <stdio.h>

int main()
{
    float abr=8.5e6, superf, circu=10e3, raio, cont, cont1, res; //quilometros
    circu=circu*4;
    cont=2*3.14;
    cont1=4*3.14;
    raio=circu/cont; //c=2pi.r
    raio=raio*raio;
    superf=cont1*raio;
    superf=superf*0.3;
    res = abr/superf;
    res= res*100;
    printf("o Brasil ocupa %.1f porcento da superfície não coberta por água", res);
    return 0;
}

