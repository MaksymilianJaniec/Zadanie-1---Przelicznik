#include <iostream>
using namespace std;

class Przelicznik
{
public:
int a, b;

void metryczka();
float mila();
float stopa();

float milam();
float stopam();

void pobierz();
void pobierzm();
};

void Przelicznik::metryczka()
{
cout<<"Imie: Maksymilian "<<endl;
cout<<"Nazwisko: Janiec "<<endl;	
cout<<"Data: 08.11.2021 "<<endl;
}

//km 

float Przelicznik::mila()
{
return a*0.621371;	
}

float Przelicznik::stopa()
{
return a*3280.84;	
}

void Przelicznik::pobierz()
{
cout<<"Podaj dlugosc w km: "<<endl;
cin>>a;	
}

//metry

float Przelicznik::milam()
{
return b*0.000621371;	
}

float Przelicznik::stopam()
{
return b*3.28084;	
}

void Przelicznik::pobierzm()
{
cout<<"Podaj dlugosc w metrach: "<<endl;
cin>>b;	
}

int main()
{
Przelicznik przelicznik;	

przelicznik.metryczka();
int wybor;	
cout<<endl;
cout<<"Przelicznik kmm na mile/stopy angielskie"<<endl;
cout<<"1. km na mile"<<endl;
cout<<"2. km na stopy"<<endl;
cout<<"3. metry na mile"<<endl;
cout<<"4. metry na stopy"<<endl;

cin>>wybor;

switch(wybor)
{
case 1:
cout<<"Wybrales przelicznik km na mile."<<endl;
przelicznik.pobierz();	
cout<<"Dlugosc wynosi "<<przelicznik.mila()<<" mil."<<endl;

break;

case 2:
cout<<"Wybrales przezlicznik km na stopy."<<endl;
przelicznik.pobierz();	
cout<<"Dlugosc wynosi "<<przelicznik.stopa()<<" stop."<<endl;

break;

case 3:
cout<<"Wybrales przelicznik metry na mile."<<endl;
przelicznik.pobierzm();	
cout<<"Dlugosc wynosi "<<przelicznik.milam()<<" mil."<<endl;

break;

case 4:
cout<<"Wybrales przezlicznik metry na stopy."<<endl;
przelicznik.pobierzm();	
cout<<"Dlugosc wynosi "<<przelicznik.stopam()<<" stop."<<endl;

break;
}

return 0;	
}
