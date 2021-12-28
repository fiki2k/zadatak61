// Program ce izracunat sve parametre za valjak.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

int volumen(int radijus, int visina)
{
	float volumen;
	volumen=(float)PI*radijus*radijus*visina;
    return volumen;
}
	int baza(int radijus)
{
	float baza;
	baza=(float)PI*radijus*radijus;
    return baza;
}
  
  int plast(int radijus, int visina)
{
	float pov_plast;
	pov_plast=(float)2*PI*radijus*visina;
    return pov_plast;
}
  
  int oplosje(int radijus, int visina)
{
	float oplosje;
	oplosje=(float)2*PI*radijus*(radijus+visina);
    return oplosje;
}


int main()
{
    int radijus;
    int visina;
    printf("Unesi radijus i visinu\n");
    scanf("%d %d",&radijus,&visina);
    // Pozivanje funkcija.
    float V= volumen(radijus, visina);
    printf("Volumen valjka je: %.2f\n",V);
    float B= baza(radijus);
    printf("Baza valjka je: %.2f\n",B);
    float M= plast(radijus, visina);
    printf("Povrsina plasta valjka je: %.2f\n",M);
    float O= oplosje(radijus, visina);
    printf("Oplosje valjka je: %.2f\n",O);
    return 0;
}
