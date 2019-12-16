#include <iostream> 
using namespace std;

//Déclaration des fonctions 
double perimetreRectangle(double largeur, double longueur);//Calcule le perimètre du rectangle
double surfaceRectangle(double largeur, double longueur);//Calcule l'aire du rectangle
double pi(void);//Sert de constante pour donner pi
double surfaceCercle(double rayon);//Calcule l'aire du cercle
double perimetreCercle(double rayon);//Calcule le perimètre du cercle
 
int main()
{
	//Déclarations des variables utilisables dans le main
	double rayon, largeur, longueur;

	//Introduction des données du rectangle
	cout << "Introduire la largeur du rectangle (en cm): ";
	cin >> largeur;
	cout << "Introduire la longueur du rectangle (en cm): ";
	cin >> longueur;

	//Affichage de la surface et du périmètre du rectangle
	cout << "La surface du rectangle est de : " << surfaceRectangle(largeur,longueur)<< " cm²\n";
	cout << "Le perimetre du rectangle est de : " << perimetreRectangle(largeur,longueur) << " cm\n";

	//Introduction du rayon du cercle
	cout << "Introduire le rayon du cercle (en cm): ";
	cin >> rayon;

	//Affichage de la surface et du périmètre du cercle
	cout << "La surface du disque est de : " << surfaceCercle(rayon) << " cm²\n";
	cout << "Le perimetre du disque est de : " << perimetreCercle(rayon) << " cm\n";
	return 0;
}


//Définition des fonctions
double surfaceRectangle(double largeur, double longueur)
{
	return (largeur * longueur);//Calcule l'aire du rectangle en fonction de des variables rentrées
}

double perimetreRectangle(double largeur, double longueur)
{
	return (largeur + longueur) * 2;//Calcule le périmètre du rectangle en fonction de des variables rentrées
}

double pi(void)
{
  	return 3.14159265;//Valeur constante représentant pi
}

double surfaceCercle(double rayon)
{
	return pi()*rayon*rayon;//Calcule l'aire du cercle en fonction du rayon rentré
}

double perimetreCercle(double rayon)
{
	return pi()*rayon*2;//Calcule le périmètre du cercle en fonction du rayon rentré
}
