#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10],x,i;

    printf("Wpisz elementy tablicy: \n");
    for(int i=0;i<10;++i)
        scanf("%d",&tab[i]);        //wpisanie liczb do tablicy

    printf("Wpisz element ktory chcesz znalezc: \n");
    scanf("%d",&x);                 //wpisanie adresu elementu kt�ry chcemy znale��

    for(int i=0;i<10;++i)
        if(tab[i]==x)       //szukanie czy liczba pod indeksem i jest r�wna wpisanej liczbie powyzej
            break;          // jesli tak to przerywamy dzia�anie

    if(i<10){                   // jesli indeks i jest z zakresu naszej tablicy to wypisujemy ponizsze komunikaty
        printf("Element znaleziony pod indeksem: %d",i);
        printf("\nAdres elementu: %d",&tab[i]);             // tutaj dodatkowo wypisujemy adres w pami�ci pod kt�rym znajduje si� indeks
    }
    else                                // jak program nie znalaz� liczby to jest poni�szy komunikat
        printf("Nie znaleziono elementu" );

    return 0;
}
