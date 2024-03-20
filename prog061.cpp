// Вычисление площади треугольника по двум
// сторонам и величине угла между ними
#include <stdio.h>
#include <conio.h>
#include "math.h"   // sin и константа M_PI - число "ПИ"
void main()
{
    float a,b; // длины сторон
    float u;   // величина угла, выраженная в градусах
    float s;   // площадь треугольника

    printf("\nВычисление площади треугольника\n");
    printf("Введите в одной строке длины сторон ");
    printf("(см) -> ");
    scanf("%f%f", &a, &b);
    printf("Введите величину угла между сторонами ");
    printf("(град.) -> ");
    scanf("%f", &u);
    /* s=a*h/2, где a - основание, h - высота.
       h - может быть вычислена по формуле h=b*sin(u).
       Аргумент функции sin должен быть выражен в радианах.
       1 рад. = 180/pi, где pi - число "ПИ").
    */
    s = a*b*sin(u*M_PI/180)/2;
    printf("Площадь треугольника: %6.2f кв.см",s);

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}


