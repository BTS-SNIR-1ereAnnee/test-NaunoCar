#include <iostream>
#include <climits>	//Permet de verifier si le cin est bon en implémentant la fonction cin.good()
#include <math.h>	//Permet de convertir les bits en décimaux
using namespace std;
int main ()
{
	//Initialisation des variables
	int i = 0, valDec = 0, nbVal = 0;

	//Description du programme pour l'utilisateur
	cout << "Ce programme consiste à convertir une valeur choisie de la base 10 en binaire.\n";

	//Choix du nombre de bit à convertir avec boucle de vérification
	do{
		cout << "Sur combien de bit voulez vous convertir ? (Compris entre 1 et 30)\n";
		cin >> nbVal;
		cin.clear(); //Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
		cin.ignore(INT_MAX, '\n');//Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
	}while(nbVal > 30 || nbVal < 1  || !cin.good()); //Vérification

	//Initialisation du tableau avec le nombre maximal de bits choisi
	int valBin[nbVal];

	//Entrée du nombre décimal qu'on souhaite convertir
	do{
		cout << "Veuillez rentrer le nombre que vous souhaitez convertir\n";
		cin >> valDec;
		if (!(valDec < pow(2,nbVal))){//Vérification
			cout << "Ce nombre depasse le nombre de bits alloues\n";
		}
	}while(!(valDec < pow(2,nbVal)));//Vérification si le nombre peut être converti

	//Conversion des décimaux en bits
	for (i = 0; i < nbVal; i++){
		valBin[i] = valDec % 2;
		valDec = valDec / 2;
	}

	//Résultat de la conversion
	cout << "\nApres conversion en binaire : " << endl;

	//Boucle d'affichage des bits
	for (i = nbVal-1; i >= 0; i--){
		cout << valBin[i] << "\t";//Affichage des bits
	}
	cout << endl;
}
