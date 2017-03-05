//Nicorici Adrian, 31.03.2014
//Se considera doua siruri, a si b, de numere intregi. Sa se scrie un program care identifica prezenta sirului b in a. 
//Daca sirul b nu este in a se va afisa un mesaj corespunzator, iar in cazul in care exista se va afisa pozitia sirului b in a.

#include <iostream>
using namespace std;

void citire_sir(int sir[100]);
void comparare_siruri(int sir1[100],int sir2[100]);



void citire_sir(int sir[100]){
	int n,i;
	cout << "Introduceti limita sirului" << endl;
	cin >> n;
	for(i=0;i<n;i++){
		cout << "sir[" << i <<"]= ";
		cin >> sir[i];
	}
	sir[i]='\0';
}

void comparare_siruri(int sir1[100],int sir2[100]){
	int c,i=0,j=0,cod=0;
	c=sir2[j];
	
	while(sir2[j]!='\0'){
		if(c==sir1[i]){
			cout << "Element gasit pe pozitia " << i  << endl;
			cod=1;
		}
		i++;
		if(sir1[i]=='\0'){
			j++;
			c=sir2[j];
			i=0;
			
		}
	}
	if(cod==0){
		cout << "Nu s-a gasit nici un element comun" << endl;
	}
}

int main(){
	int a[100],b[100];
	citire_sir(a);
	citire_sir(b);
	comparare_siruri(a,b);

	system("pause");
	return 0;
}