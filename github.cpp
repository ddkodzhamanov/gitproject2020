#include <iostream>
using namespace std;
double pica;
double domat;
double krastavica;
double sirene;
double hotdog;
double kashkaval;
double hamburger;
double kufte;
double kebabche;
double mlqko;
double qbulka;
double portokal;
double cheresha;
double dinq;
double voda;
double sok;
double maslina;
double musaka;
double pari=250;
float pokupki;

int main()
{
while(pari>=0)
{
cout<<"\n\n Dobre doshli v Lidl!\n\n";
cout<<"Menu:\n\n";
cout<<"1 pica $1\n";
cout<<"2 domat $1\n";
cout<<"3 krastavica $2\n";
cout<<"4 sirene $5\n";
cout<<"5 hotdog $1\n";
cout<<"6 kashkaval $4\n";
cout<<"7 hamburger $3\n";
cout<<"8 kufte $3\n";
cout<<"9 kebabche $3\n";
cout<<"10 mlqko $2\n";
cout<<"11 qbulka $1\n";
cout<<"12 portokal $1\n";
cout<<"13 cheresha $1\n";
cout<<"14 dinq $10\n";
cout<<"15 voda $2\n";
cout<<"16 sok $3\n";
cout<<"17 maslina $1\n";
cout<<"18 musaka $12\n\n";
cout<<"Imate\n"<<pica<<" pica\n"<< domat<< " domat\n"<<krastavica<<" krastavica\n"<<sirene<<" sirene\n"<<hotdog<<" hotdog\n"<<kashkaval<<" kashkaval\n"<<hamburger<<" hamburger\n"<<kufte<<" kufte\n"<<kebabche<<" kebabche\n"<<mlqko<<" mlqko\n"<<qbulka<<" qbulka\n"<<portokal<<" portokal\n"<<cheresha<<" cheresha\n"<<dinq<<" dinq\n"<<voda<<" voda\n"<<sok<<" sok\n"<<maslina<<" maslina\n"<<musaka<<" musaka\n\n";
cout<< "Tova sa parite s koito razpolagate $" <<pari<<".\n\n";
cout<<" Vuvedete chisloto na produktà koito iskate da zakupite ili napishete 20 za da zakupite izbranite produkti.\n\n\n";
cin>> pokupki;

if(pokupki == 1)
{
pica++;
pari = pari-1;
}

if(pokupki == 2)
{
domat++;
pari = pari-1;
}

if(pokupki == 3)
{
krastavica++;
pari = pari-2;
}

if(pokupki == 4)
{
sirene++;
pari = pari-5;
}

if(pokupki == 5)
{
hotdog++;
pari = pari-1;
}

if(pokupki == 6)
{
kashkaval++;
pari = pari-4;
}

if(pokupki == 7)
{
hamburger++;
pari = pari-3;
}

if(pokupki == 8)
{
kufte++;
pari = pari-3;
}

if(pokupki == 9)
{
kebabche++;
pari = pari-3;
}

if(pokupki == 10)
{
mlqko++;
pari = pari-2;
}

if(pokupki == 11)
{
qbulka++;
pari = pari-1;
}

if(pokupki == 12)
{
portokal++;
pari = pari-1;
}

if(pokupki == 13)
{
cheresha++;
pari = pari-1;
}

if(pokupki == 14)
{
dinq++;
pari = pari-10;
}

if(pokupki == 15)
{
voda++;
pari = pari-2;
}

if(pokupki == 16)
{
sok++;
pari = pari-3;
}

if(pokupki == 17)
{
maslina++;
pari = pari-1;
}

if(pokupki == 18)
{
musaka++;
pari = pari-12;
}

if(pokupki == 20)
{
cout << "\n\n Blagodarq che pazaruvahte\n\n";
cin.get();
return 0;
}

}


cin.get();
return 0;
}