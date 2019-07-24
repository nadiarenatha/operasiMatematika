#include <stdio.h>
#include <stdlib.h>

int pilihan,angkaawal,angka2,hasil;

void main()
{
    printf("Masukkan angka awal <int> = ");
    scanf("%i", &angkaawal);
    system("cls");
    awal();
}

void awal()
{
    printf("Angka : %i\n",angkaawal);
    printf("Pilih Operasi\n");
    printf("1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\n5.Modulo\n6.Faktorial\n7.Reset\n8.Exit\n");
    printf("Pilih Operasi : ");
    scanf("%i", &pilihan);
    if(pilihan==1)
    {
        tambah();
    }   else if(pilihan==2)
    {
        kurang();
    }   else if(pilihan==3)
    {
        kali();
    }   else if(pilihan==4)
    {
        bagi();
    }   else if(pilihan==5)
    {
        modulo();
    }   else if(pilihan==6)
    {
        faktorial();

}   else if(pilihan==7)
    {
        reset();
    }   else if(pilihan==8)
    {
        keluar();
    }
}

void tambah()
    {
        printf("Masukkan Angka 2 = ");
        scanf("%i", &angka2);
        hasil = angkaawal+angka2;
        printf("Hasil : %i + %i = %i\n", angkaawal,angka2,hasil);
        angkaawal = hasil;
        system("pause");
        system("cls");
        awal();
    }

void kurang()
    {

        printf("Masukkan Angka 2 = ");
        scanf("%i", &angka2);
        hasil = angkaawal-angka2;
        printf("Hasil : %i - %i = %i\n", angkaawal,angka2,hasil);
        angkaawal = hasil;
        system("pause");
        system("cls");
        awal();
    }

void kali()
    {
        printf("Masukkan Angka 2 = ");
        scanf("%i", &angka2);
        hasil = angkaawal*angka2;
        printf("Hasil : %i * %i = %i\n", angkaawal,angka2,hasil);
        angkaawal = hasil;
        system("pause");
        system("cls");
        awal();
    }

void bagi()
    {
        printf("Masukkan Angka 2 = ");
        scanf("%i", &angka2);
        hasil = angkaawal/angka2;
        printf("Hasil : %i / %i = %i\n", angkaawal,angka2,hasil);
        angkaawal = hasil;
        system("pause");
        system("cls");
        awal();
    }

void modulo()
    {
        printf("Masukkan Angka 2 = ");
        scanf("%i", &angka2);
        hasil = angkaawal%angka2;
        printf("Hasil : %i mod %i = %i\n", angkaawal,angka2,hasil);
        angkaawal = hasil;
        system("pause");
        system("cls");
        awal();
    }
void faktorial(){
    int hasil=1,a;
    for(a=1; a<=angkaawal; a++)
    {
    hasil=a*hasil;
    }
    printf("Hasilnya %i! = %i\n",angkaawal,hasil);
    angkaawal=hasil;
    system("pause");
    system("cls");
    awal();

}
void reset()
{
        angkaawal=0;
        system("pause");
        system("cls");
        awal();
}
void keluar()
{

}



