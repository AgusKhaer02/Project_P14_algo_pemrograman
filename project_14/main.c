//main.c
#include "persegi.c"
#include "persegipanjang.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,p,l;
    printf("Nama : Agus Kurniadin Khaer \n");
    printf("NIM : 201110199 \n");
    printf("Program dengan fungsi \n");
    printf("-------------------------\n");
    printf("HITUNG PERSEGI ==== \n");
    printf("nilai s = ");scanf("%d",&s);
    printf("Luas persegi = %d \n\n",persegi(s));

    printf("HITUNG PERSEGI PANJANG ==== \n");
    printf("nilai P = ");scanf("%d",&p);
    printf("nilai L = ");scanf("%d",&l);
    printf("Luas persegi panjang = %d \n",persegipanjang(p,l));
    return 0;
}