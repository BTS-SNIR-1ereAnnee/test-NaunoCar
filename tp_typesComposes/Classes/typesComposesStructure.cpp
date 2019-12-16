#include <iostream>

using namespace std;

int main(){
	//Définition de la structure
	struct Voiture{
		float reservoir, consommation; int distanceParcourue;
	};

	//Déclaration du tableau de structure
	Voiture garage[10];

	//Définition des caractéristiques de la 4ème voiture
	garage[3] = {0,7.4,100};

	struct Voiture voiture = {99.9,7.5,0};//Définition des caractéristiques de la voiture concernée
	struct Voiture *pointeurVoiture = &voiture;//Création du pointeur sur la structure choisie
	cout << "La voiture a un reservoir de " << voiture.reservoir << " litres\n";
	cout << "Et elle a parcouru " << voiture.distanceParcourue << "km pour le moment.\n\n";

	//Preuve que le pointeur fonctionne
	cout << "La voiture a un reservoir de " << pointeurVoiture->reservoir << " litres\n";
	cout << "Elle consomme " << pointeurVoiture->consommation << "L/100km\n";
	cout << "Et elle a parcouru " << pointeurVoiture->distanceParcourue << "km pour le moment.\n\n";

	//Affichage des caractéristiques de la 4ème voiture du garage
	cout << "La voiture a un reservoir de " << garage[3].reservoir << " litres\n";
	cout << "Elle consomme " << garage[3].consommation << "L/100km\n";
	cout << "Et elle a parcouru " << garage[3].distanceParcourue << "km pour le moment.\n";


}
