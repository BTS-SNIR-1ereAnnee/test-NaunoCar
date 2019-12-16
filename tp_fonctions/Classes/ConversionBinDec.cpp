#include <iostream>
#include <climits>	//Permet de verifier si le cin est bon en implémentant la fonction cin.good()
#include <math.h>	//Permet de faire appelle à la fonction pow(), pour convertir les bits en décimaux
using namespace std;

//Déclaration des fonctions 
int convertirBinDec(int nombreBits, int valeurBinaire[]);
int convertirDecBin(int nombreBits, int nombreDecimal, int valeurBinaire[]);

int main()
{
	//Déclaration des variables
	int nombreBits = 0, nombreDecimal, i;

	//Choix du nombre de bits à convertir avec boucle de vérification
	do{
		cout << "Sur combien de bit voulez vous convertir ?\n";
		cin >> nombreBits;
		cin.clear(); //Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
		cin.ignore(INT_MAX, '\n');//Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
	}while(nombreBits < 1  || !cin.good()); //Vérification

	int valeurBinaire[nombreBits];//Nécessaire de déclarer le tableau après l'entrée de l'utilisateur
	cout << "Entrez les bits du nombre a convertir en commencant par le bit de poids faible"<<endl;

	//Saisie du nombre binaire
	for (i = 0;i <nombreBits;i++)
	{
		cout << "bit "<<i<<": ";
		cin >> valeurBinaire[i];

		//Test de la validité de la saisie
		while ((valeurBinaire[i] < 0) || (valeurBinaire[i] > 1) || !cin.good())
		{
			cout << "Erreur de saisie. Le bit doit valoir 0 ou 1" <<endl;
			cin.clear(); //Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
			cin.ignore(INT_MAX, '\n');//Nécessaire si l'utilisateur rentre autre chose qu'un chiffre
			cin >> valeurBinaire[i];
		}
	}

	//Affichage du nombre binaire
	cout << "\nValeur binaire du nombre saisi : ";
	for (i = nombreBits-1;i>=0;i--)
	{
		cout << valeurBinaire[i];	
	}
	cout << endl;
	

	//Affichage du résultat
	cout << "Valeur décimale du nombre saisi : " << convertirBinDec(nombreBits, valeurBinaire) << endl;

	//Entrée du nombre décimal qu'on souhaite convertir
	do{
		cout << "\nVeuillez rentrer le nombre que vous souhaitez convertir\n";
		cin >> nombreDecimal;
		if (!(nombreDecimal < pow(2,nombreBits))){//Vérification
			cout << "Ce nombre depasse le nombre de bits alloues\n";
		}
	}while(!(nombreDecimal < pow(2,nombreBits)));//Vérification si le nombre peut être converti

	//Permet de convertir la valeur rentrée au préalable en binaire
	convertirDecBin(nombreBits, nombreDecimal, valeurBinaire);


	cout << "\nApres conversion en binaire : " << endl;
	//Boucle d'affichage des bits
	for (i = nombreBits-1; i >= 0; i--){
		cout << valeurBinaire[i] << "\t";//Affichage des bits
	}
	cout << endl;

	return 0;
}

//Déclaration des fonctions

//Fonction permettant de convertir les bits en nombre décimal
int convertirBinDec(int nombreBits, int valeurBinaire[])
{
	int nombreDecimal = 0;

	for (int i = nombreBits -1;i>=0;i--)
		{
			nombreDecimal += valeurBinaire[i]*pow(2,i);
		}

	return nombreDecimal;
}

//Fonction permettant de convertir le nombre décimal en bits
int convertirDecBin(int nombreBits, int nombreDecimal, int valeurBinaire[])
{
	for (int i = 0; i < nombreBits; i++){
		valeurBinaire[i] = nombreDecimal % 2;
		nombreDecimal = nombreDecimal / 2;
	}

	return 0;
}