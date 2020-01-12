#include"header.h"

float pangkat(int angka, int pangkatnya)
{

    int pangkatny;
    pangkatny=pow(angka,pangkatnya);
    return(pangkatny);
}

float Lsegitiga (int alas, int tinggi)
{
    float hasil;
    hasil = (alas*tinggi)/2;
    return (hasil);
}



void input()
{

    printf("Angka : ");
    scanf("%d",&angka);

    printf("Pangkatnya : ");
    scanf("%d",&pangkatnya);

    printf("Alas : ");
    scanf("%d",&alas);

    printf("Tinggi : ");
    scanf("%d",&tinggi);
}

void output()
{

    float hasil;
    hasil = pangkat(angka,pangkatnya);
    printf("%d pangkat %d adalah %.2f \n",angka,pangkatnya , hasil);

    float hasil2=Lsegitiga(alas,tinggi);
    printf("Luas segitiga nya adalah %.2f \n",hasil2);

}
