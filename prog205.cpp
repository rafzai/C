#include <stdio.h>
#include <conio.h>
#include <math.h> // для доступа к M_PI

// объем цилиндра
float vcil(float h, float r)
{
    return(M_PI*r*r*h);
}

void main()
{
    float r,h; // высота и радиус основания цилиндра
    float v;   // объем цилиндра

    puts("Вычисление объема цилиндра");
    printf("Введите высоту и радиус основания ->");
    scanf("%f%f", &h, &r);
    v = vcil(h, r);
    printf("Объем цилиндра %3.2f\n", v);
    
    printf("Для завершения нажмите <Enter>");
    getch();
}

