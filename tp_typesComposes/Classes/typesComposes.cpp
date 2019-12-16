#include <iostream>

using namespace std;
int main ()
{
	//Déclaration des variables
	int zone [5][5] = 
	{
		{5,2,5,1,1},
		{10,5,2,5,1},
		{5,1,1,2,5},
		{5,12,15,1,1},
		{2,1,5,2,1}
	};
	int i, j, total = 0, pointDeauMax = zone[0][0];
	float moyenne = 0;

	//Calcul des zones
	for (j = 0; j < 5; j++){
		for (i = 0; i < 5; i++){
			zone[i][j] = zone[i][j]*2;//Double le nombre de points d'eau
			total += zone[i][j];//Addition des valeurs
			moyenne++;//Incrémentation pour avoir la bonne taille
			if (zone[i][j] > pointDeauMax)//Condition
				pointDeauMax = zone[i][j];//Augmente la variable
		}
	}

	moyenne = total/moyenne;//Calcul de la moyenne

	//Affichage
	cout << "Il y a en tout " << total << " points d'eau dans toute la zone.\n";
	cout << "La moyenne des points d'eaux est de " << moyenne << "km2.\n";
	cout << "Le nombre de point d'eau maximal sur une case est de : " << pointDeauMax << endl;
}
