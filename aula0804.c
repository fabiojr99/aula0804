#include <stdio.h>

typedef struct
{
    float base;
    float altura;
    float area;
    float perimetro;
}Retangulo;

Retangulo CriaRetangulo(float base, float altura)
{
    Retangulo ret_criado;
    ret_criado.altura = altura;
    ret_criado.base = base;
    return ret_criado;
}

Retangulo CalculaArea(Retangulo ret)
{
    Retangulo ret_trabalhado = ret;
    ret_trabalhado.area = ret.altura * ret.base;
    return ret_trabalhado;}

Retangulo CalculaPerimetro(Retangulo p)
{
    p.perimetro = p.altura*2 + p.base*2;
    return (p);
}

int main()
{
    float a, b;
    Retangulo teclado;
    printf ("Digite os dados do retangulo(base, altura): ");
    /*scanf("%f,%f", &teclado.base, &teclado.altura);*/
    scanf("%f, %f", &b, &a);
    teclado = CriaRetangulo(b,a);
    teclado = CalculaArea(teclado);
    teclado = CalculaPerimetro(teclado);
    printf("Base: %2.3f\n", teclado.base);
    printf("Altura: %2.3f\n", teclado.altura);
    printf("Area: %2.3f\n", teclado.area);
    printf("Perimetro: %2.3f\n", teclado.perimetro);
    return 0;
}