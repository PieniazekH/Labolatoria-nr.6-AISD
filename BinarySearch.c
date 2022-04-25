#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int tablica[]){
    for(int i=0; i<9 ; i++){
        for(int j=0; j<9-i; j++){
            if (tablica[j]>tablica[j+1]){
                int temp=tablica[j];
                tablica[j]=tablica[j+1];
                tablica[j+1]=temp;
            }
        }
    }


}
int binarySearch(int tab[], int lewa, int prawa, int x)
{
    if (prawa >= lewa) {
        int pivot = lewa + (prawa - lewa) / 2;


        if (tab[pivot] == x)
            return pivot;   // jezeli szukana wartosc jest pivotem to wyswietlamy indeks pivota i konczymy


        if (tab[pivot]>x)
            return binarySearch(tab,lewa,pivot-1, x); // jesli szukana wartoœæ jest mniejsza niz wartoœæ pivotu to przeszukujemy lewa czesc tablicy


        return binarySearch(tab,pivot+1, prawa, x); //jesli wartoœæ nie by³a pivotem i nie by³a mniejsza od piwota to na pewno jest wieksza wiec
                                                    // przeszukujemy prawa strone tablicy
    }


    return -1;
}

int main()
{
    int x;
    int tab[] = {5,4,10,40,8,1,7,5,3,9};
    bubbleSort(tab);
    for(int i=0; i<10; i++){
        printf("%d ", tab[i]);      // wyswietlenie posortowanej tablicy
    }
    printf("\n wpisz element który chcesz znaleŸæ: \n");
    scanf("%d",&x);             // wpisanie jakiej wartosci szukamy




    int wynik = binarySearch(tab, 0, 9, x);
    if(wynik == -1){
        printf("Elementu nie ma w tablicy");
    } else {
        printf("Element znajduje sie na pozycji %d", wynik);
    }
    return 0;
}
