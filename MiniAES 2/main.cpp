#include<stdlib.h>
#include<stdio.h>
#define LICZBA 30
int klucz000[4]={0,0,0,1};
int klucz001[4]={1,1,0,0};
int klucz010[4]={1,0,0,1};
int klucz011[4]={0,0,1,0};
int kopiaklucza000[4];
int kopiaklucza001[4];
int kopiaklucza010[4];
int kopiaklucza011[4];
int klucz100[4];
int klucz101[4];
int klucz110[4];
int klucz111[4];
int klucz200[4];
int klucz201[4];
int klucz210[4];
int klucz211[4];
int box00[4];
int box01[4];
int box10[4];
int box11[4];
int esbox[4];
int esbox00[4];
int esbox01[4];
int esbox10[4];
int esbox11[4];
int blok000[4],blok010[4],blok001[4],blok011[4];
int blok100[4],blok110[4],blok101[4],blok111[4];
int m0011[4]={0,0,1,1};
int m0010[4]={0,0,1,0};
int m00[4],m01[4],m10[4],m11[4];
int mat00[4],mat10[4],mat01[4],mat11[4];
int pom0[4],pom1[4],pom2[4],pom3[4];
int sbox(int a[]);
int main()
{
		 FILE *bity;
		 FILE *testy;
	 char plik[1000];
	 int plik1[1000];
	 int koniec[16];
		 int i=0,j=0;
	int h=0,f=0;
	
	int tab[6]={0,0,0,0,0,0};
	int dziel[5]={1,0,0,1,1};
	int p=0,l=0,d=0,u=0;
	int wynik[6]={0,0,0,0,0,0};
	int wynik1[4]={0,0,0,0};
	for(i=0;i<1000;i++){plik[i]=0;
	plik1[i]=0;}
	
 if ((bity=fopen("plik.txt", "r"))== NULL) 
	{
    printf ("Nie moge otworzyc pliku test.txt do odczytu!\n");
    }
 if(bity==NULL) perror("error opening file");
 else
 {
	if (fgets(plik,1000,bity)!=NULL)
	 puts(plik);
 }
  fclose (bity);

  for(i=0;i<1000;i++)
  {
	  plik1[i]=plik[i];
	  plik1[i]=plik1[i]%48;
  }
  for(i=0;i<1000;i++)
  {
	  printf("%i",plik1[i]);
  }
  printf("\n klucze rundy 0 : 00 {%d,%d,%d,%d}\n", klucz000[0], klucz000[1], klucz000[2], klucz000[3]);
  printf("\n klucze rundy 0 : 01 {%d,%d,%d,%d}\n", klucz001[0], klucz001[1], klucz001[2], klucz001[3]);
  printf("\n klucze rundy 0 : 10 {%d,%d,%d,%d}\n", klucz010[0], klucz010[1], klucz010[2], klucz010[3]);
  printf("\n klucze rundy 0 : 11 {%d,%d,%d,%d}\n", klucz011[0], klucz011[1], klucz011[2], klucz011[3]);
 for(i=0;i<4;i++){
 kopiaklucza000[i]=klucz000[i];
 kopiaklucza001[i]=klucz001[i];
 kopiaklucza010[i]=klucz010[i];
 kopiaklucza011[i]=klucz011[i];}

if(klucz011[0]==0&&klucz011[1]==0&&klucz011[2]==0&&klucz011[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz011[0]==0&&klucz011[1]==0&&klucz011[2]==0&&klucz011[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz011[0]==0&&klucz011[1]==0&&klucz011[2]==1&&klucz011[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz011[0]==0&&klucz011[1]==0&&klucz011[2]==1&&klucz011[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz011[0]==0&&klucz011[1]==1&&klucz011[2]==0&&klucz011[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz011[0]==0&&klucz011[1]==1&&klucz011[2]==0&&klucz011[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz011[0]==0&&klucz011[1]==1&&klucz011[2]==1&&klucz011[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz011[0]==0&&klucz011[1]==1&&klucz011[2]==1&&klucz011[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz011[0]==1&&klucz011[1]==0&&klucz011[2]==0&&klucz011[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz011[0]==1&&klucz011[1]==0&&klucz011[2]==0&&klucz011[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz011[0]==1&&klucz011[1]==0&&klucz011[2]==1&&klucz011[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz011[0]==1&&klucz011[1]==0&&klucz011[2]==1&&klucz011[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz011[0]==1&&klucz011[1]==1&&klucz011[2]==0&&klucz011[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz011[0]==1&&klucz011[1]==1&&klucz011[2]==0&&klucz011[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz011[0]==1&&klucz011[1]==1&&klucz011[2]==1&&klucz011[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz011[0]==1&&klucz011[1]==1&&klucz011[2]==1&&klucz011[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){
	klucz100[i]=klucz000[i]^esbox[i]^klucz000[i];
	klucz110[i]=klucz010[i]^klucz100[i];
	klucz101[i]=klucz001[i]^klucz110[i];
	klucz111[i]=klucz011[i]^klucz101[i];
}
//for(i=0;i<4;i++){
//
//}
//for(i=0;i<4;i++){
//
//}
//for(i=0;i<4;i++){
//
//}
printf("\n wartoscklucza pierwszej rundy\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz100[i]);
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz101[i]); 
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz110[i]);
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz111[i]);
}
printf("\n");
if(klucz111[0]==0&&klucz111[1]==0&&klucz111[2]==0&&klucz111[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz111[0]==0&&klucz111[1]==0&&klucz111[2]==0&&klucz111[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz111[0]==0&&klucz111[1]==0&&klucz111[2]==1&&klucz111[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz111[0]==0&&klucz111[1]==0&&klucz111[2]==1&&klucz111[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz111[0]==0&&klucz111[1]==1&&klucz111[2]==0&&klucz111[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz111[0]==0&&klucz111[1]==1&&klucz111[2]==0&&klucz111[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz111[0]==0&&klucz111[1]==1&&klucz111[2]==1&&klucz111[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz111[0]==0&&klucz111[1]==1&&klucz111[2]==1&&klucz111[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz111[0]==1&&klucz111[1]==0&&klucz111[2]==0&&klucz111[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(klucz111[0]==1&&klucz111[1]==0&&klucz111[2]==0&&klucz111[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz111[0]==1&&klucz111[1]==0&&klucz111[2]==1&&klucz111[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(klucz111[0]==1&&klucz111[1]==0&&klucz111[2]==1&&klucz111[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz111[0]==1&&klucz111[1]==1&&klucz111[2]==0&&klucz111[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz111[0]==1&&klucz111[1]==1&&klucz111[2]==0&&klucz111[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(klucz111[0]==1&&klucz111[1]==1&&klucz111[2]==1&&klucz111[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(klucz111[0]==1&&klucz111[1]==1&&klucz111[2]==1&&klucz111[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){
	klucz200[i]=klucz100[i]^esbox[i]^klucz011[i];
	klucz210[i]=klucz110[i]^klucz200[i];
	klucz201[i]=klucz101[i]^klucz210[i];
	klucz211[i]=klucz111[i]^klucz201[i];
}
//for(i=0;i<4;i++){
//
//}
//for(i=0;i<4;i++){
//
//}
//for(i=0;i<4;i++){
//
//}
printf("\n wartoscklucza drugiej rundy\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz200[i]);
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz201[i]); 
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz210[i]);
}
printf("\n");
for(i=0;i<4;i++)
{
	printf("%d",klucz211[i]);
}
printf("\n");
int c=0;
for(j=0;j<960;j=j+16){///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//printf("\npodzial\n");
	for(i=0;i<4;i++){blok000[i]=plik1[h];h++; if(blok000[i]==1)c++;}
	for(i=0;i<4;i++){blok001[i]=plik1[h];h++; if(blok001[i]==1)c++;}
	for(i=0;i<4;i++){blok010[i]=plik1[h];h++; if(blok010[i]==1)c++;}
	for(i=0;i<4;i++){blok011[i]=plik1[h];h++; if(blok011[i]==1)c++;}
	if(c==0) break;
	c=0;
		printf("\n pierwsze 16 bitow wczytanych z plikuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \n");
	printf("\n pierwsze 16 bitow wczytanych z pliku \n");
			printf("\n blok000 {%d,%d,%d,%d} blok001 {%d,%d,%d,%d} blok010 {%d,%d,%d,%d} blok011 {%d,%d,%d,%d} h wynosi %d\n",blok000[0],blok000[1],blok000[2],blok000[3],  blok001[0],blok001[1],blok001[2],blok001[3],  blok010[0],blok010[1],blok010[2],blok010[3],   blok011[0],blok011[1],blok011[2],blok011[3],h);
			//dodanie do blokow kluczy rundy zero
	for(i=0;i<4;i++){box00[i]=klucz000[i]^blok000[i];
					box01[i]=klucz001[i]^blok001[i];
					box10[i]=klucz010[i]^blok010[i];
					box11[i]=klucz011[i]^blok011[i];}
	printf("\n dodanie do blokow klucza 0 \n");
	printf("\n box00 {%d,%d,%d,%d} box01 {%d,%d,%d,%d} box10 {%d,%d,%d,%d} box11 {%d,%d,%d,%d} \n",box00[0],box00[1],box00[2],box00[3],  box01[0],box01[1],box01[2],box01[3],  box10[0],box10[1],box10[2],box10[3],   box11[0],box11[1],box11[2],box11[3]);

	
	
	//zastosowanie ffunkcji podstawiania na blokach
if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox00[i]=esbox[i];}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox01[i]=esbox[i];}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox10[i]=esbox[i];}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox11[i]=esbox[i];}
printf("\n zastosowanie funkcji podstawiania \n");
printf("\n sbox00  ");
for(i=0;i<4;i++){printf("%d,",esbox00[i]);}
printf(" sbox01   ");
for(i=0;i<4;i++){printf("%d,",esbox01[i]);}
printf(" sbox10   ");
for(i=0;i<4;i++){printf("%d,",esbox10[i]);}
printf(" sbox11   ");
for(i=0;i<4;i++){printf("%d,",esbox11[i]);}
printf("\n");
//zamiana wierszy
for(i=0;i<4;i++){blok100[i]=esbox00[i];
				 blok101[i]=esbox01[i];
				 blok110[i]=esbox11[i];
				 blok111[i]=esbox10[i];}
printf("\n wyniki po uzyciu zamiany wierszy \n");
printf("\n blok100  ");
for(i=0;i<4;i++){printf("%d,",blok100[i]);}
printf(" blok101   ");
for(i=0;i<4;i++){printf("%d,",blok101[i]);}
printf(" blok110   ");
for(i=0;i<4;i++){printf("%d,",blok110[i]);}
printf(" blok111   ");
for(i=0;i<4;i++){printf("%d,",blok111[i]);}
printf("\n");
//mieszanie kolumn


// dla linijki m00[i]=m0011[i]^blok100[i];
u=0;


	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok100[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m00[i]=wynik1[i];}
	printf(" \n ");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf(" \n ");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

// dla linijki m01[i]=m0010[i]^blok110[i];



	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok110[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m01[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

	//m10[i]=m0010[i]^blok100[i];



	

	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok100[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m10[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;
	//m11[i]=m0011[i]^blok110[i];


	
	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok110[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m11[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

	


/*for(i=0;i<4;i++){
m00[i]=m0011[i]^blok100[i];
m01[i]=m0010[i]^blok110[i];
m10[i]=m0010[i]^blok100[i];
m11[i]=m0011[i]^blok110[i];}*/
for(i=0;i<4;i++){
mat00[i]=m00[i]^m01[i];
mat10[i]=m10[i]^m11[i];}

	//m00[i]=m0011[i]^blok101[i];
//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok101[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m00[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");	
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;


	///	m01[i]=m0010[i]^blok111[i];


	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok111[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m01[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;


		//m10[i]=m0010[i]^blok101[i];

	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok101[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m10[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;
	//m11[i]=m0011[i]^blok111[i];

	
	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok111[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m11[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {
		printf("%d",wynik1[i]);}///////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;



/*for(i=0;i<4;i++){
	m00[i]=m0011[i]^blok101[i];
	m01[i]=m0010[i]^blok111[i];
	m10[i]=m0010[i]^blok101[i];
	m11[i]=m0011[i]^blok111[i];
}*/
for(i=0;i<4;i++){
mat01[i]=m00[i]^m01[i];
mat11[i]=m10[i]^m11[i];}
for(i=0;i<4;i++){pom0[i]=klucz100[i]^mat00[i];
					pom1[i]=klucz101[i]^mat01[i];
					pom2[i]=klucz110[i]^mat10[i];
					pom3[i]=klucz111[i]^mat11[i];}
printf("\n mieszanie kolumn  z dodaniem klucza \n");
printf("\n pom0  ");
for(i=0;i<4;i++){printf("%d,",pom0[i]);}
printf(" pom1   ");
for(i=0;i<4;i++){printf("%d,",pom1[i]);}
printf(" pom2   ");
for(i=0;i<4;i++){printf("%d,",pom2[i]);}
printf(" pom3   ");
for(i=0;i<4;i++){printf("%d,",pom3[i]);}
printf("\n");



//start generacji klucza rundy 2 
//funkcja podstawiania na blokach


if(pom0[0]==0&&pom0[1]==0&&pom0[2]==0&&pom0[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom0[0]==0&&pom0[1]==0&&pom0[2]==0&&pom0[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom0[0]==0&&pom0[1]==0&&pom0[2]==1&&pom0[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom0[0]==0&&pom0[1]==0&&pom0[2]==1&&pom0[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom0[0]==0&&pom0[1]==1&&pom0[2]==0&&pom0[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom0[0]==0&&pom0[1]==1&&pom0[2]==0&&pom0[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom0[0]==0&&pom0[1]==1&&pom0[2]==1&&pom0[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom0[0]==0&&pom0[1]==1&&pom0[2]==1&&pom0[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom0[0]==1&&pom0[1]==0&&pom0[2]==0&&pom0[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom0[0]==1&&pom0[1]==0&&pom0[2]==0&&pom0[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom0[0]==1&&pom0[1]==0&&pom0[2]==1&&pom0[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom0[0]==1&&pom0[1]==0&&pom0[2]==1&&pom0[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom0[0]==1&&pom0[1]==1&&pom0[2]==0&&pom0[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom0[0]==1&&pom0[1]==1&&pom0[2]==0&&pom0[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom0[0]==1&&pom0[1]==1&&pom0[2]==1&&pom0[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom0[0]==1&&pom0[1]==1&&pom0[2]==1&&pom0[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox00[i]=esbox[i];}
if(pom1[0]==0&&pom1[1]==0&&pom1[2]==0&&pom1[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom1[0]==0&&pom1[1]==0&&pom1[2]==0&&pom1[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom1[0]==0&&pom1[1]==0&&pom1[2]==1&&pom1[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom1[0]==0&&pom1[1]==0&&pom1[2]==1&&pom1[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom1[0]==0&&pom1[1]==1&&pom1[2]==0&&pom1[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom1[0]==0&&pom1[1]==1&&pom1[2]==0&&pom1[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom1[0]==0&&pom1[1]==1&&pom1[2]==1&&pom1[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom1[0]==0&&pom1[1]==1&&pom1[2]==1&&pom1[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom1[0]==1&&pom1[1]==0&&pom1[2]==0&&pom1[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom1[0]==1&&pom1[1]==0&&pom1[2]==0&&pom1[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom1[0]==1&&pom1[1]==0&&pom1[2]==1&&pom1[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom1[0]==1&&pom1[1]==0&&pom1[2]==1&&pom1[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom1[0]==1&&pom1[1]==1&&pom1[2]==0&&pom1[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom1[0]==1&&pom1[1]==1&&pom1[2]==0&&pom1[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom1[0]==1&&pom1[1]==1&&pom1[2]==1&&pom1[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom1[0]==1&&pom1[1]==1&&pom1[2]==1&&pom1[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox01[i]=esbox[i];}
if(pom2[0]==0&&pom2[1]==0&&pom2[2]==0&&pom2[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom2[0]==0&&pom2[1]==0&&pom2[2]==0&&pom2[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom2[0]==0&&pom2[1]==0&&pom2[2]==1&&pom2[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom2[0]==0&&pom2[1]==0&&pom2[2]==1&&pom2[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom2[0]==0&&pom2[1]==1&&pom2[2]==0&&pom2[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom2[0]==0&&pom2[1]==1&&pom2[2]==0&&pom2[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom2[0]==0&&pom2[1]==1&&pom2[2]==1&&pom2[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom2[0]==0&&pom2[1]==1&&pom2[2]==1&&pom2[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom2[0]==1&&pom2[1]==0&&pom2[2]==0&&pom2[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom2[0]==1&&pom2[1]==0&&pom2[2]==0&&pom2[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom2[0]==1&&pom2[1]==0&&pom2[2]==1&&pom2[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom2[0]==1&&pom2[1]==0&&pom2[2]==1&&pom2[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom2[0]==1&&pom2[1]==1&&pom2[2]==0&&pom2[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom2[0]==1&&pom2[1]==1&&pom2[2]==0&&pom2[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom2[0]==1&&pom2[1]==1&&pom2[2]==1&&pom2[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom2[0]==1&&pom2[1]==1&&pom2[2]==1&&pom2[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox10[i]=esbox[i];}
if(pom3[0]==0&&pom3[1]==0&&pom3[2]==0&&pom3[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom3[0]==0&&pom3[1]==0&&pom3[2]==0&&pom3[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom3[0]==0&&pom3[1]==0&&pom3[2]==1&&pom3[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom3[0]==0&&pom3[1]==0&&pom3[2]==1&&pom3[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom3[0]==0&&pom3[1]==1&&pom3[2]==0&&pom3[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom3[0]==0&&pom3[1]==1&&pom3[2]==0&&pom3[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom3[0]==0&&pom3[1]==1&&pom3[2]==1&&pom3[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom3[0]==0&&pom3[1]==1&&pom3[2]==1&&pom3[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom3[0]==1&&pom3[1]==0&&pom3[2]==0&&pom3[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(pom3[0]==1&&pom3[1]==0&&pom3[2]==0&&pom3[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom3[0]==1&&pom3[1]==0&&pom3[2]==1&&pom3[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(pom3[0]==1&&pom3[1]==0&&pom3[2]==1&&pom3[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom3[0]==1&&pom3[1]==1&&pom3[2]==0&&pom3[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom3[0]==1&&pom3[1]==1&&pom3[2]==0&&pom3[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(pom3[0]==1&&pom3[1]==1&&pom3[2]==1&&pom3[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(pom3[0]==1&&pom3[1]==1&&pom3[2]==1&&pom3[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox11[i]=esbox[i];}
printf("\n zastosowanie funkcji podstawiania \n");
printf("\n sbox00  ");
for(i=0;i<4;i++){printf("%d,",esbox00[i]);}
printf(" sbox01   ");
for(i=0;i<4;i++){printf("%d,",esbox01[i]);}
printf(" sbox10   ");
for(i=0;i<4;i++){printf("%d,",esbox10[i]);}
printf(" sbox11   ");
for(i=0;i<4;i++){printf("%d,",esbox11[i]);}
printf("\n");
//zamiana wierszy
for(i=0;i<4;i++){blok100[i]=esbox00[i];
				 blok101[i]=esbox01[i];
				 blok110[i]=esbox11[i];
				 blok111[i]=esbox10[i];}
printf("\n wyniki po uzyciu zamiany wierszy \n");
printf("\n blok100  ");
for(i=0;i<4;i++){printf("%d,",blok100[i]);}
printf(" blok101   ");
for(i=0;i<4;i++){printf("%d,",blok101[i]);}
printf(" blok110   ");

for(i=0;i<4;i++){printf("%d,",blok110[i]);}
printf(" blok111   ");
for(i=0;i<4;i++){printf("%d,",blok111[i]);}
printf("\n");

for(i=0;i<4;i++){pom0[i]=klucz200[i]^blok100[i];
					pom1[i]=klucz201[i]^blok101[i];
					pom2[i]=klucz210[i]^blok110[i];
					pom3[i]=klucz211[i]^blok111[i];}
printf("\n mieszanie kolumn  z dodaniem klucza   ZASZYFROWANE \n");
printf("\n pom0  ");
for(i=0;i<4;i++){printf("%d,",pom0[i]);}
printf(" pom1   ");
for(i=0;i<4;i++){printf("%d,",pom1[i]);}
printf(" pom2   ");
for(i=0;i<4;i++){printf("%d,",pom2[i]);}
printf(" pom3   ");
for(i=0;i<4;i++){printf("%d,",pom3[i]);}
printf("\n");


for(i=0;i<4;i++)
{
	koniec[i]=pom0[i];
	
}
for(i=0;i<4;i++)
{
	koniec[i+4]=pom1[i];
	
}
for(i=0;i<4;i++)
{
	koniec[i+8]=pom2[i];
	
}
for(i=0;i<4;i++)
{
	koniec[i+12]=pom3[i];
	
}


printf("OSTATECZNY \n");
				

/////////////
 if ((testy=fopen("testy.txt", "a+"))== NULL) 
	{
    printf ("problem  z test z\n");
    }
   for(i=0;i<16;i++)
   {
	fprintf (testy, "%i", koniec[i]);
   }
   fclose (testy);
/////////////

}



//zerowanie
h=0;
c=0;
for(i=0;i<1000;i++){plik[i]=0;
					plik1[i]=0;}
	for(i=0;i<4;i++){blok000[i]=0;}
	for(i=0;i<4;i++){blok001[i]=0;}
	for(i=0;i<4;i++){blok010[i]=0;}
	for(i=0;i<4;i++){blok011[i]=0;}
	
 if ((testy=fopen("testy.txt", "r"))== NULL) 
	{
    printf ("Nie moge otworzyc pliku test.txt do odczytu!\n");
    }
 if(testy==NULL) perror("error opening file");
 else
 {
	if (fgets(plik,1000,testy)!=NULL)
	 puts(plik);
 }
  fclose (testy);

  for(i=0;i<1000;i++)
  {
	  plik1[i]=plik[i];
	  plik1[i]=plik1[i]%48;
  }
  for(i=0;i<1000;i++)
  {
	  printf("%i",plik1[i]);
  }
  for(j=0;j<960;j=j+16){
	//printf("\npodzial\n");
	for(i=0;i<4;i++){blok000[i]=plik1[h];h++; if(blok000[i]==1)c++;}
	for(i=0;i<4;i++){blok001[i]=plik1[h];h++; if(blok001[i]==1)c++;}
	for(i=0;i<4;i++){blok010[i]=plik1[h];h++; if(blok010[i]==1)c++;}
	for(i=0;i<4;i++){blok011[i]=plik1[h];h++; if(blok011[i]==1)c++;}
	if(c==0) break;
	c=0;
	printf("\n pierwsze 16 bitow wczytanych z pliku \n");
			printf("\n blok000 {%d,%d,%d,%d} blok001 {%d,%d,%d,%d} blok010 {%d,%d,%d,%d} blok011 {%d,%d,%d,%d} h wynosi %d\n",blok000[0],blok000[1],blok000[2],blok000[3],  blok001[0],blok001[1],blok001[2],blok001[3],  blok010[0],blok010[1],blok010[2],blok010[3],   blok011[0],blok011[1],blok011[2],blok011[3],h);
  for(i=0;i<4;i++){box00[i]=klucz200[i]^blok000[i];
					box01[i]=klucz201[i]^blok001[i];
					box10[i]=klucz210[i]^blok010[i];
					box11[i]=klucz211[i]^blok011[i];}
	printf("\n dodanie do blokow klucza 2 \n");
	printf("\n box00 {%d,%d,%d,%d} box01 {%d,%d,%d,%d} box10 {%d,%d,%d,%d} box11 {%d,%d,%d,%d} \n",box00[0],box00[1],box00[2],box00[3],  box01[0],box01[1],box01[2],box01[3],  box10[0],box10[1],box10[2],box10[3],   box11[0],box11[1],box11[2],box11[3]);
 //zamiana wierszy
for(i=0;i<4;i++){blok100[i]=box00[i];
				 blok101[i]=box01[i];
				 blok110[i]=box11[i];
				 blok111[i]=box10[i];}

for(i=0;i<4;i++){box00[i]=blok100[i];
				 box01[i]=blok101[i];
				 box10[i]=blok110[i];
				 box11[i]=blok111[i];}
printf("\n wyniki po uzyciu zamiany wierszy \n");
printf("\n blok100  ");
for(i=0;i<4;i++){printf("%d,",blok100[i]);}
printf(" blok101   ");
for(i=0;i<4;i++){printf("%d,",blok101[i]);}
printf(" blok110   ");
for(i=0;i<4;i++){printf("%d,",blok110[i]);}
printf(" blok111   ");
for(i=0;i<4;i++){printf("%d,",blok111[i]);}
printf("\n");
 


if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox00[i]=esbox[i];}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox01[i]=esbox[i];}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox10[i]=esbox[i];}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}       
  for(i=0;i<4;i++){esbox11[i]=esbox[i];}
  printf("\n zastosowanie funkcji podstawiania \n");
printf("\n sbox00  ");
for(i=0;i<4;i++){printf("%d,",esbox00[i]);}
printf(" sbox01   ");
for(i=0;i<4;i++){printf("%d,",esbox01[i]);}
printf(" sbox10   ");
for(i=0;i<4;i++){printf("%d,",esbox10[i]);}
printf(" sbox11   ");
for(i=0;i<4;i++){printf("%d,",esbox11[i]);}
printf("\n");
//dodawanie klucza rundy 1
for(i=0;i<4;i++){blok100[i]=klucz100[i]^esbox00[i];
				blok101[i]=klucz101[i]^esbox01[i];
				blok110[i]=klucz110[i]^esbox10[i];
				blok111[i]=klucz111[i]^esbox11[i];}
for(i=0;i<4;i++){printf("a%d",blok100[i]);}

//mieszanie kolumn

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// dla linijki m00[i]=m0011[i] X blok100[i];
u=0;


	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok100[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m00[i]=wynik1[i];}
	printf(" \n ");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf(" \n ");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

// dla linijki m01[i]=m0010[i]^blok110[i];



	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok110[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m01[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

	//m10[i]=m0010[i]^blok100[i];



	

	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok100[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m10[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}/////////////////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;
	//m11[i]=m0011[i]^blok110[i];


	
	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok110[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m11[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;

	


/*for(i=0;i<4;i++){
m00[i]=m0011[i]^blok100[i];
m01[i]=m0010[i]^blok110[i];
m10[i]=m0010[i]^blok100[i];
m11[i]=m0011[i]^blok110[i];}*/
for(i=0;i<4;i++){
mat00[i]=m00[i]^m01[i];
mat10[i]=m10[i]^m11[i];}

	//m00[i]=m0011[i]^blok101[i];
//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok101[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m00[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");	
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;


	///	m01[i]=m0010[i]^blok111[i];


	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok111[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m01[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}///////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;


		//m10[i]=m0010[i]^blok101[i];

	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0010[p]==1){
			tab[5-u]=tab[5-u]+blok101[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m10[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {printf("%d",wynik1[i]);}////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;
	//m11[i]=m0011[i]^blok111[i];

	
	
	//mnozenie 
	for(i=0 , p=3 ;i<4; i++ , p--){
	for(u=i , f=3; u<4+i;u++, f--){
			if(m0011[p]==1){
			tab[5-u]=tab[5-u]+blok111[f];
			}}}
	for(i=0;i<6;i++) 
	{tab[i]=tab[i]%2;
		printf("%d",tab[i]);}
	//dzielenie 
	//zliczamy na jakiej pozycji stoi pierwsza jedynka
	for(i=0;i<6;i++)
	{
		if(tab[i]==1)break; 
		d++;
	}
	
	if (tab[1]==1)
	{
		for(i=d,l=0;l<5;l++,i++)
		{
			wynik[i]=tab[i]^dziel[l];
		}
		//odpowieada za przekopiowanie z tablicy 6 na tablice 4
		for(i=0;i<4;i++){wynik1[i]=wynik[i+2];}
	}
	else
	{
	if(d>2)
		{
		for(i=0,p=2;i<4;i++,p++)
			{wynik1[i]=tab[p];}
		}
		else
		{
		for(i=0,p=d;i<4;i++,p++)//problem przy liczbach 000000 d jest duze
			{wynik1[i]=tab[p];}
		}
	}
	for(i=0;i<4;i++){m11[i]=wynik1[i];}
	printf("\n");
	for(i=0;i<6;i++) {printf("%d",wynik[i]);}
	printf("\n");
	for(i=0;i<4;i++) {
		printf("%d",wynik1[i]);}///////////////////////////////
	//zerowanie
	for(i=0;i<6;i++) 
	{tab[i]=0;}

	d=0;



/*for(i=0;i<4;i++){
	m00[i]=m0011[i]^blok101[i];
	m01[i]=m0010[i]^blok111[i];
	m10[i]=m0010[i]^blok101[i];
	m11[i]=m0011[i]^blok111[i];
}*/
for(i=0;i<4;i++){
mat01[i]=m00[i]^m01[i];
mat11[i]=m10[i]^m11[i];}

printf("\n mieszanie kolumn   \n");
printf("\n pom0  ");
for(i=0;i<4;i++){printf("%d,",mat00[i]);}
printf(" pom1   ");
for(i=0;i<4;i++){printf("%d,",mat01[i]);}
printf(" pom2   ");
for(i=0;i<4;i++){printf("%d,",mat10[i]);}
printf(" pom3   ");
for(i=0;i<4;i++){printf("%d,",mat11[i]);}
printf("\n");


for(i=0;i<4;i++){box00[i]=mat00[i];
				 box01[i]=mat01[i];
				 box10[i]=mat11[i];
				 box11[i]=mat10[i];}




if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==0&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==0&&box00[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==0&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==0&&box00[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box00[0]==1&&box00[1]==1&&box00[2]==1&&box00[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox00[i]=esbox[i];}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==0&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==0&&box01[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==0&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==0&&box01[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box01[0]==1&&box01[1]==1&&box01[2]==1&&box01[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox01[i]=esbox[i];}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==0&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==0&&box10[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==0&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==0&&box10[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box10[0]==1&&box10[1]==1&&box10[2]==1&&box10[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
for(i=0;i<4;i++){esbox10[i]=esbox[i];}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==0&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==0){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==0&&box11[3]==1){esbox[0]=1 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==0&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==0){esbox[0]=1 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=1 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==0&&box11[3]==1){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=1 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==0){esbox[0]=0 ; esbox[1]=0 ; esbox[2]=0 ; esbox[3]=0 ;}
if(box11[0]==1&&box11[1]==1&&box11[2]==1&&box11[3]==1){esbox[0]=0 ; esbox[1]=1 ; esbox[2]=0 ; esbox[3]=1 ;}       
  for(i=0;i<4;i++){esbox11[i]=esbox[i];}
  printf("\n zastosowanie funkcji podstawiania \n");
printf("\n sbox00  ");
for(i=0;i<4;i++){printf("%d,",esbox00[i]);}
printf(" sbox01   ");
for(i=0;i<4;i++){printf("%d,",esbox01[i]);}
printf(" sbox10   ");
for(i=0;i<4;i++){printf("%d,",esbox10[i]);}
printf(" sbox11   ");
for(i=0;i<4;i++){printf("%d,",esbox11[i]);}
printf("\n");
//dodawanie klucza rundy 0
for(i=0;i<4;i++){blok100[i]=klucz000[i]^esbox00[i];
				blok101[i]=klucz001[i]^esbox01[i];
				blok110[i]=klucz010[i]^esbox10[i];
				blok111[i]=klucz011[i]^esbox11[i];}
printf("ODSZYFROWANE");
for(i=0;i<4;i++){printf("%d",blok100[i]);}
for(i=0;i<4;i++){printf("%d",blok101[i]);}
for(i=0;i<4;i++){printf("%d",blok110[i]);}
for(i=0;i<4;i++){printf("%d",blok111[i]);}

 }	
system("pause");
return 0;}