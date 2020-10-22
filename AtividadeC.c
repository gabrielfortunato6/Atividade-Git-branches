#include <stdio.h>

#include <stdlib.h>

#include <math.h>

float delt(float a, float b, float c)

{
float d;
d = (b * b - 4 * a * c);
return d;
}

float raiz(float d)

{
float r;
r = sqrt(d);
return r;
}

void raizes(float a, float b, float c, float d, float r, float *x1, float *x2)

{
*x1 = ((- + r)/2) * a;
*x2 = ((- - r)/2) * a;
return ;
}

int main()

{

float a, b, c, d, r, x1, x2;
printf("Calculadora equação de segundo grau AX2+BX+C=0 \n");
printf("Digite o valor de A: ");
scanf("%f",&a);
printf("Digite o valor de B: ");
scanf("%f",&b);
printf("Digite o valor de C: ");
scanf("%f",&c);
d = delt(a, b, c);
r = raiz(d);
if (d < 0)
{

printf("O valor de delta é: %.2f\n",d);
printf("A raíz de delta não existe!.\n");
}

else

{
if (d == 0)

{

printf("O valor de delta é: %.2f\n",d);
printf("A raiz de delta é: %.2f\n",r);
raizes(a, b, c, d, r, &x1, &x2);
printf("Tem uma raíz: x1=%.2f e x2=%.2f\n", x1, x2);

}
else

{
if (d > 0)

{
printf("O valor de delta é: %.2f\n",d);
printf("A raíz de delta é: %.2f\n",r);
raizes(a, b, c, d, r, &x1, &x2);
printf("Existem duas raízes: x1=%.2f e x2=%.2f\n", x1, x2);
}

}

}

system("pause");

return 0;

}

{

printf("By Gabriel Ambrósio");

}

{

{

printf("To Tania");

}


