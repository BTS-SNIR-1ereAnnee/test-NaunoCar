#include <iostream>
#include <climits>	//Permet de verifier si le cin est bon en implémentant la fonction cin.good()
#include <math.h>	//Permet de convertir les bits en décimaux
using namespace std;
int main ()
{
	//Initialisation des variables
	const int valMax = 30; //Constante nécessaire pour le tableau
	int valBin[valMax], i, j, valDec = 0, valBinChoisie = 0;

	//Description du programme pour l'utilisateur
	cout << "Ce programme consiste à convertir une valeur choisie de bits en decimal.\n";

	//Choix du nombre de bit à convertir avec boucle de vérification
	do{
		cout << "Combien de bit voulez vous convertir ? (Compris entre 1 et 30)\n";
		cin >> valBinChoisie;
		cin.clear(); //Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
		cin.ignore(INT_MAX, '\n');//Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
	}while(valBinChoisie > 30 || valBinChoisie < 1  || !cin.good()); //Vérification

	//Valeur utilisée plus tard pour faire les conversions
	j = valBinChoisie - 1;

	//Entrées des bits à convertir avec boucle de vérification
	for (i = 0; i < valBinChoisie; i++){
		cout << "Veuillez rentrer successivement les valeurs de chaque bit \n";
		cin >> valBin[i];
		if(!(valBin[i] == 0 || valBin[i] == 1) || !cin.good()){//Vérification
			i--;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Veuillez n'entrer qu'un 1 ou un 0" << endl;//Message affiché si la saisie est pas acceptée
		}
	}

	//Affichage du récapitulatif des entrées
	cout << "Vous avez rentre : \n";

	//Conversion des bits en décimal
	for (i = 0; i < valBinChoisie; i++){
		cout << valBin[i] << "\t";//Affichage des bits
		valDec += valBin[i]*pow(2,j);//Utilisation d'une fonction permettant de calculer les puissances
		j--;//Décrémentation de la puissance pour la conversion
	}

	//Résultat de la conversion
	cout << "\nApres conversion en decimale : " << valDec << endl;
}
