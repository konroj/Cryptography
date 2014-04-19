/*
	PROGRAM DO OBLICZANIA DLUGOSCI KLUCZA TEKSTRU ZASZYFROWANEGO METODA VIGENERE'A.
	UZYTECZNE TYLKO DLA DLUGICH TEKSTOW
	BEZ ZNAKOW INTERPUNKCYJNYCH I SPACJI
	TYLKO WIELKIE LITERY
	
	KONRAD ROJ
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main () {

miejsce_skoku:
//deklarowanie zmiennych
   double indeks=0, indeks2=0; 
   string szyfr;
   string temp;
   int liczba;
   int wiele=1;
   int tablica[26];
   int tablica2[26];
   int ilosc=0;
   int ilosc2=0;
   
//kolejne litery alfabetu zliczane w tablicy
    for (int y=0; y<26 ;y++)
    {
    	tablica[y]=0;
    }
    
//kolejne litery alfabetu zliczane w tablicy2
    for (int y=0; y<26 ;y++)
    {
    	tablica2[y]=0;
    }

//wczytywanie tekstu do string
   ifstream plik;
   plik.open( "szyfrowany.txt" );
   plik>>szyfr;
	temp=szyfr;

//pobieranie dlugosci klucza do sprawdzenia	
// cout<<"Podaj dlugosc klucza, dla ktorego sprawdzana bedzie zgodnosc:"<<endl;
// cin>>liczba;
   liczba=1;
 
//sprawdzanie zgodnosci
 	int skok=liczba;
 	int skok2=liczba;
 	double iter=0;
 	double iter2=0;

	do
	{
	for (int y=0; y<temp.length() ; y=skok)
	 {
	 	if(temp.at(y)==65)
	 	{
	 		tablica[0]++;
	 	}

		else if(temp.at(y)==66)
	 	{
	 		tablica[1]++;
	 	}
		 
		 else if(temp.at(y)==67)
	 	{
	 		tablica[2]++;
	 	}	
		 
		 else if(temp.at(y)==68)
	 	{
		    tablica[3]++;
	    }

		 else if(temp.at(y)==69)
	 	{
	 		tablica[4]++;
	 	}	 
		 
		 else if(temp.at(y)==70)
	 	{
	 		tablica[5]++;
	 	}	 
		 
		 else if(temp.at(y)==71)
	 	{
	 		tablica[6]++;
	 	}	 
		 
		else if(temp.at(y)==72)
	 	{
	 		tablica[7]++;
	 	}	 
		 
		 else if(temp.at(y)==73)
	 	{
	 		tablica[8]++;
	 	}	 
		 
		 else if(temp.at(y)==74)
	 	{
	 		tablica[9]++;
	 	}	 
		 
		 else if(temp.at(y)==75)
	 	{
	 		tablica[10]++;
	 	}	 
		 
		 else if(temp.at(y)==76)
	 	{
	 		tablica[11]++;
	 	}	 
		 
		 else if(temp.at(y)==77)
	 	{
	 		tablica[12]++;
	 	}	 
		 
		 else if(temp.at(y)==78)
	 	{
	 		tablica[13]++;
	 	}	 
		 
		 else if(temp.at(y)==79)
	 	{
	 		tablica[14]++;
	 	}	 
		 
		 else if(temp.at(y)==80)
	 	{
	 		tablica[15]++;
	 	}	 
		 
		 else if(temp.at(y)==81)
	 	{
	 		tablica[16]++;
	 	}	 
		 
		 else if(temp.at(y)==82)
	 	{
	 		tablica[17]++;
	 	}	 
		 
		 else if(temp.at(y)==83)
	 	{
	 		tablica[18]++;
	 	}	 
		 
		 else if(temp.at(y)==84)
	 	{
	 		tablica[19]++;
	 	}	 
		 
		 else if(temp.at(y)==85)
	 	{
	 		tablica[20]++;
	 	}	 
		 
		 else if(temp.at(y)==86)
	 	{
	 		tablica[21]++;
	 	}	 
		 
		 else if(temp.at(y)==87)
	 	{
	 		tablica[22]++;
	 	}	 
		 
		 else if(temp.at(y)==88)
	 	{
	 		tablica[23]++;
	 	}	 
		 
		 else if(temp.at(y)==89)
	 	{
	 		tablica[24]++;
	 	}
		 
		 else if(temp.at(y)==90)
	 	{
	 		tablica[25]++;
	 	}	 
		 
		 	  	 	
	 	
	 	skok=skok+liczba;
	 } 

//sprawdzanie zgodnosci nr 2
    if(liczba>1)
	{
    for (int y=1; y<temp.length() ; y=skok2)
	 {
	    if(temp.at(y)==65)
	 	{
	 		tablica2[0]++;
	 	}

		else if(temp.at(y)==66)
	 	{
	 		tablica2[1]++;
	 	}
		 
		 else if(temp.at(y)==67)
	 	{
	 		tablica2[2]++;
	 	}	
		 
		 else if(temp.at(y)==68)
	 	{
		    tablica2[3]++;
	    }

		 else if(temp.at(y)==69)
	 	{
	 		tablica2[4]++;
	 	}	 
		 
		 else if(temp.at(y)==70)
	 	{
	 		tablica2[5]++;
	 	}	 
		 
		 else if(temp.at(y)==71)
	 	{
	 		tablica2[6]++;
	 	}	 
		 
		else if(temp.at(y)==72)
	 	{
	 		tablica2[7]++;
	 	}	 
		 
		 else if(temp.at(y)==73)
	 	{
	 		tablica2[8]++;
	 	}	 
		 
		 else if(temp.at(y)==74)
	 	{
	 		tablica2[9]++;
	 	}	 
		 
		 else if(temp.at(y)==75)
	 	{
	 		tablica2[10]++;
	 	}	 
		 
		 else if(temp.at(y)==76)
	 	{
	 		tablica2[11]++;
	 	}	 
		 
		 else if(temp.at(y)==77)
	 	{
	 		tablica2[12]++;
	 	}	 
		 
		 else if(temp.at(y)==78)
	 	{
	 		tablica2[13]++;
	 	}	 
		 
		 else if(temp.at(y)==79)
	 	{
	 		tablica2[14]++;
	 	}	 
		 
		 else if(temp.at(y)==80)
	 	{
	 		tablica2[15]++;
	 	}	 
		 
		 else if(temp.at(y)==81)
	 	{
	 		tablica2[16]++;
	 	}	 
		 
		 else if(temp.at(y)==82)
	 	{
	 		tablica2[17]++;
	 	}	 
		 
		 else if(temp.at(y)==83)
	 	{
	 		tablica2[18]++;
	 	}	 
		 
		 else if(temp.at(y)==84)
	 	{
	 		tablica2[19]++;
	 	}	 
		 
		 else if(temp.at(y)==85)
	 	{
	 		tablica2[20]++;
	 	}	 
		 
		 else if(temp.at(y)==86)
	 	{
	 		tablica2[21]++;
	 	}	 
		 
		 else if(temp.at(y)==87)
	 	{
	 		tablica2[22]++;
	 	}	 
		 
		 else if(temp.at(y)==88)
	 	{
	 		tablica2[23]++;
	 	}	 
		 
		 else if(temp.at(y)==89)
	 	{
	 		tablica2[24]++;
	 	}
		 
		 else if(temp.at(y)==90)
	 	{
	 		tablica2[25]++;
	 	}	 
		 
		 	  	 	
	 	
	 	skok2=skok2+liczba;
	 } 
     }

//ilosc liter
for(int i=0 ; i<26 ; i++)
{
	ilosc=ilosc+tablica[i];
}

for(int i=0 ; i<26 ; i++)
{
	ilosc2=ilosc2+tablica2[i];
}

//obliczanie wspolczynnika wystapien	
	 for (int y=0; y<26 ;y++)
	 {
	 iter=iter+(tablica[y]*(tablica[y]-1));
     }
     iter=iter/(ilosc*(ilosc-1));
     
     for (int y=0; y<26 ;y++)
	 {
	 iter2=iter2+(tablica2[y]*(tablica2[y]-1));
     }
     iter2=iter2/(ilosc2*(ilosc2-1));
     

    cout<<endl<<"Jezeli | 0,58 < dlugosc < 0,72 | to wysokie prawdopodobienstwo:"<<endl;
  	cout<<endl<<iter<<" i "<<iter2<<endl;
	liczba++;
	}
	while(liczba<=10);


    cout<<endl<<"Rozpoczac proces wyszukiwania wzajemnego indeksu zgodnosci?"<<endl<<"1 jesli nie, dowolny jesli tak."<<endl;
    int tak;
	int g=1;
    cin>>tak;
    if(tak==1)
    {
    	goto miejsce_skoku;
    }
//obliczanie i wypisywanie indeksu zgodnosci
    else
    {
    	int tempindeks=0, tempindeks2=0;
    	for (int y=0; y<26 ;y++)
    	{
       		indeks=indeks+(tablica[y]*tablica2[y]);
        }
            indeks=indeks/(ilosc*ilosc2);

	    	tempindeks=(unsigned int)(indeks*100);
//Dla k1=k2       
        	if(tempindeks>=6 && tempindeks<=7)
        	{
        		cout<<"Wzajemny indeks zgodnosci (k1=k2): "<<indeks<<endl;
        	}
//Dla k1!=k2
        	else
        	{
        		do
				{	
					for(int i=0 ; i<25 ; i++)
					{
					rotate(tablica2, tablica2+wiele, tablica2+26);
				    for(int y=0 ; y<26 ; y++)
        			{
        			indeks2=indeks2+(tablica[y]*tablica2[y]);
        			}
					indeks2=indeks2/(ilosc*ilosc2);
					tempindeks2=(unsigned int)(indeks2*100);
					cout<<"Wzajemny indeks zgodnosci (k1!=k2): "<<indeks2<<" przesuniecie g: "<<wiele<<endl;
					wiele++;
					}
				}
				while(tempindeks2<=6 && tempindeks2>=7);
        	}
    }
//Wyjscie
  	cout<<"Wpisz cokolwiek by wyjsc."<<endl;	
	int stop;
	cin>>stop;
    return 0;
}