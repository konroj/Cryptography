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
 //  double indeks=0, indeks2=0; 
   string szyfr;
   string temp;
   int liczba;
   int wiele=1;
  
//wczytywanie tekstu do string
   ifstream plik;
   plik.open( "szyfrowany.txt" );
   plik>>szyfr;
	temp=szyfr;

//pobieranie dlugosci klucza do sprawdzenia	
 cout<<"Podaj dlugosc klucza, dla ktorego sprawdzana bedzie zgodnosc:"<<endl;
 cin>>liczba;
 
int **tablica = new int *[liczba];
for ( int i = 0; i < liczba; ++i )
tablica[i] = new int [26];
   //ilosc liter
int *ilosc = new int[liczba];
for(int i=0 ; i<liczba ; i++)
 ilosc[i]=0;

double *iter = new double[liczba];
for(int i=0 ; i<liczba ; i++)
 iter[i]=0;

double *indeks = new double[liczba];
for(int i=0 ; i<liczba ; i++)
 indeks[i]=0;

for(int j=0 ; j<liczba ; j++)
{
for(int i=0 ; i<26 ; i++)
{
	tablica[j][i]=0;
}
}

//sprawdzanie zgodnosci
	
	for (int i=0; i<liczba ; i++)
	{
	//int skok=liczba;
	for (int y=i; y<temp.length() ; y+=liczba)
	 {
	 	if(temp.at(y)==65)
	 	{
	 		tablica[i][0]++;
	 	}

		else if(temp.at(y)==66)
	 	{
	 		tablica[i][1]++;
	 	}
		 
		 else if(temp.at(y)==67)
	 	{
	 		tablica[i][2]++;
	 	}	
		 
		 else if(temp.at(y)==68)
	 	{
		    tablica[i][3]++;
	    }

		 else if(temp.at(y)==69)
	 	{
	 		tablica[i][4]++;
	 	}	 
		 
		 else if(temp.at(y)==70)
	 	{
	 		tablica[i][5]++;
	 	}	 
		 
		 else if(temp.at(y)==71)
	 	{
	 		tablica[i][6]++;
	 	}	 
		 
		else if(temp.at(y)==72)
	 	{
	 		tablica[i][7]++;
	 	}	 
		 
		 else if(temp.at(y)==73)
	 	{
	 		tablica[i][8]++;
	 	}	 
		 
		 else if(temp.at(y)==74)
	 	{
	 		tablica[i][9]++;
	 	}	 
		 
		 else if(temp.at(y)==75)
	 	{
	 		tablica[i][10]++;
	 	}	 
		 
		 else if(temp.at(y)==76)
	 	{
	 		tablica[i][11]++;
	 	}	 
		 
		 else if(temp.at(y)==77)
	 	{
	 		tablica[i][12]++;
	 	}	 
		 
		 else if(temp.at(y)==78)
	 	{
	 		tablica[i][13]++;
	 	}	 
		 
		 else if(temp.at(y)==79)
	 	{
	 		tablica[i][14]++;
	 	}	 
		 
		 else if(temp.at(y)==80)
	 	{
	 		tablica[i][15]++;
	 	}	 
		 
		 else if(temp.at(y)==81)
	 	{
	 		tablica[i][16]++;
	 	}	 
		 
		 else if(temp.at(y)==82)
	 	{
	 		tablica[i][17]++;
	 	}	 
		 
		 else if(temp.at(y)==83)
	 	{
	 		tablica[i][18]++;
	 	}	 
		 
		 else if(temp.at(y)==84)
	 	{
	 		tablica[i][19]++;
	 	}	 
		 
		 else if(temp.at(y)==85)
	 	{
	 		tablica[i][20]++;
	 	}	 
		 
		 else if(temp.at(y)==86)
	 	{
	 		tablica[i][21]++;
	 	}	 
		 
		 else if(temp.at(y)==87)
	 	{
	 		tablica[i][22]++;
	 	}	 
		 
		 else if(temp.at(y)==88)
	 	{
	 		tablica[i][23]++;
	 	}	 
		 
		 else if(temp.at(y)==89)
	 	{
	 		tablica[i][24]++;
	 	}
		 
		 else if(temp.at(y)==90)
	 	{
	 		tablica[i][25]++;
	 	}	 
	 } 
	 }

for(int j=0 ; j<liczba ; j++)
{
for(int i=0 ; i<26 ; i++)
{
	ilosc[j]=ilosc[j]+tablica[j][i];
	//cout<<tablica[j][i]<<" "<<endl;
}
}

//obliczanie wspolczynnika wystapien	
	 for(int j=0 ; j<liczba ; j++)
     {
	 for (int y=0; y<26 ;y++)
	 {
	 iter[j]=iter[j]+(tablica[j][y]*(tablica[j][y]-1));
     }
     iter[j]=iter[j]/(ilosc[j]*(ilosc[j]-1));
	 }

    cout<<endl<<"Jezeli | 0,58 < dlugosc < 0,72 | to wysokie prawdopodobienstwo:"<<endl;
  	for(int j=0 ; j<liczba ; j++)
	cout<<endl<<iter[j]<< endl;


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
		for(int j=0 ; j<liczba-1 ; j++)
		{
    	for (int y=0; y<26 ;y++)
    	{
       		indeks[j]=indeks[j]+(tablica[j][y]*tablica[j+1][y]);
        }
		}

		for(int j=0 ; j<liczba-1 ; j++)
		{
        indeks[j]=indeks[j]/(ilosc[j]*ilosc[j+1]);
		//cout<<indeks[j]<<" ";
		}

		for(int j=0 ; j<liczba-1 ; j++)
		{
	    tempindeks=(unsigned int)(indeks[j]*1000);
//Dla k1=k2       
        	if(tempindeks>=60 && tempindeks<=70)
        	{
        		cout<<"Wzajemny indeks zgodnosci (k1=k2): "<<indeks[j]<<endl;
        	}
//Dla k1!=k2
        	else
				//cout<<liczba<<"\n";
        	{
					//for(int j=0 ; j<liczba-1 ; j++)
					//{
					for(int i=0 ; i<26 ; i++)
					{
					rotate(tablica[j+1], tablica[j+1]+1, tablica[j+1]+26);
					//if(i==1) cout<<tablica[j+1]<<endl;
					double indeks2=0;
				    for(int y=0 ; y<26 ; y++)
        			{
        			indeks2=indeks2+(tablica[j][y]*tablica[j+1][y]);
        			}
					indeks2=indeks2/(ilosc[j]*ilosc[j+1]);
					//tempindeks2=(unsigned int)(indeks2*1000);
					cout<<"Wzajemny indeks zgodnosci "<<j+1<<" i "<<j+2<<": "<<indeks2<<" przesuniecie alfabetu w lewo o: "<<i<<endl;
					rotate(tablica[j+1], tablica[j+1]-1, tablica[j+1]+26);
					indeks2=0;
					//wiele++;
					//}
					}
					cout<<"\n";
        	}
    }
	}
//Wyjscie
  	cout<<"Wpisz cokolwiek by wyjsc."<<endl;	
	int stop;
	cin>>stop;
    return 0;
}