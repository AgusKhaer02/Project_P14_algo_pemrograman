#include "HitungNS.c"
#include "HitungBobot.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct khsMahasiswa
{
    char kodeMK[15];
    char namaMK[100];
    int sks;
    char nilai[1];
};
int main()
{
    struct khsMahasiswa khs[9];
    int index = 0;
    int jumlahSKS,jumlahNS;
    float ipSemester;
    do{
        printf("\nData ke => %d",index);
        printf("\nMasukkan kode MK : "); scanf("%s", &khs[index].kodeMK);
        printf("Masukkan nama : "); scanf("%s", &khs[index].namaMK);
        printf("Masukkan SKS : "); scanf("%d", &khs[index].sks);
        printf("Masukkan nilai huruf (A s/d E) : "); scanf("%s", &khs[index].nilai);
        printf("\n =====================================");
        index++;
    }while (index < 9);

    // reset
    index = 0;
    printf("\n\n");
    printf("\t --====Kartu Hasil Studi====-- \n");
    printf("\t --====Target Yang Ingin Dicapai====-- \n");
    printf("NIM        : 201110199 \n");
    printf("Nama       : Agus Kurniadin Khaer \n");
    printf("Prodi      : Teknik Informatika \n");
    printf("Semester   : 2 \n");
    printf("\n======================================================================= \n");
    printf("NO\tKode MK\tNama\t\t\t\tSKS\tNilai\tBobot\tNS");
    printf("\n======================================================================= \n");
    do
    {
        int bobot,ns;
        char nilai[1];
        jumlahSKS += khs[index].sks;
        printf("%d\t%s\t%s\t\t%d\t%s", index + 1, khs[index].kodeMK,khs[index].namaMK, khs[index].sks, khs[index].nilai);

        bobot = hitungBobot(khs[index].nilai);

        printf("\t%d", bobot);
        ns = hitungNS(khs[index].sks, bobot);
        jumlahNS += ns;
        printf("\t%d", ns);
        printf("\n");
        index++;
    } while (index < 9);

    printf("Jumlah SKS = %d \n",jumlahSKS );
    printf("Jumlah NS = %d \n",jumlahNS );
    ipSemester = jumlahNS / jumlahSKS;
    printf("IP Semester = %0.2f \n",ipSemester );


    return 0;
}
