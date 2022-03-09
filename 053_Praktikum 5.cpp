#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct data
{
 char nama[20];
 char alamat[20];
 char jabatan[15];
 struct data *next;
};

int main () 
{
 int j=0,i,y,y1;
 char t[5];
 struct data *tampung;
 struct data *ujung;

do
 {
 ujung = (struct data *)malloc(sizeof(struct data));
 printf("Masukkan nama tt : "); gets((ujung->nama));
 printf("Masukkan alamat t : "); gets((ujung->alamat));
 printf("Masukkan jabatan t : "); gets((ujung->jabatan));


 if (j!=0)
 ujung->next=tampung;
 if(j==0)
 ujung->next=NULL;

tampung=ujung;
 printf("Ada data lagi y/t :"); gets(t);
 if ((t,"Y")==0||(t,"y")==0)
 {
 j++;
 continue;
 }
 }while ((t,"t")!=0); ')';

printf("Data yang dimasukkan n");
 printf("Nama t Alamat t Jabatann");
 printf("=========================n");

for (i=0;i<=j;i++)
 {
 printf("%s t %s t %s n",ujung->nama,ujung->alamat,ujung->jabatan);
 ujung=ujung->next->next;
 }

}

