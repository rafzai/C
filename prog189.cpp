// Разбивает строку на подстроки
#include "stdafx.h"
#include "string.h"
#include "stdio.h"
#include "conio.h"

void main()
{
    char full[80]; // исходная строка
    
    char first[80]; // имя
    char mid[80];   // отчество
    char last[80];  // фамилия
    
    char* p1; // указатель на символ исходной строки
    char* p2; // указатель на символ формируемой строки
    
    printf("Полное имя (имя отчество фамилия) ->");
    gets(full);

    p1 = full;

    // извлечь имя
    p2 = first;
    *p2 = '\0';
    while ( (*p1 != ' ') && ( *p1 != NULL ) )
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';    
    
    // извлечь отчество 
    p2 = mid;
    *p2 = '\0';
    if ( *p1 == ' ')
    {
        p1++;    
        while ( (*p1 != ' ') && ( *p1 != NULL ) )
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
        *p2 = '\0';    
    }
    
    // извлечь фамилию
    p2 = last;
    *p2 = '\0';
    if ( *p1 == ' ')
    {
        p1++;    
        while ( (*p1 != ' ') && ( *p1 != NULL ) )
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
        *p2 = '\0';    
    }

    // Проверить, сколько подстрок удалось извлечь
    // из строки. Если две, то вторая подстрока
    // это фамилия, а не отчество

    if ( *last == '\0' )
    {
        strcpy(last,mid);
        *mid = '\0';
    }

    printf("\nИмя:%s",first);
    printf("\nОтчество:%s",mid);
    printf("\nФамилия:%s",last);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

