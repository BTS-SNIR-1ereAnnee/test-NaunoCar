/*
 Conversion en majuscule
 */
#include <iostream>
#include <cstring>

void minusculesVersMajuscules(char chaine[]);

int main() {
   
   char chaine[255];
   
   std::cout << "Tapez une chaîne de caractères à transposer en majuscules : ";
   std::cin.getline(chaine, 255);//Permet de prendre en compte jusqu'à 255 caractères
   
   std::cout << std::endl << chaine;
   
   minusculesVersMajuscules(chaine);
   
   std::cout << "\nLa même chaîne en majuscules est : " << chaine << std::endl;
   return EXIT_SUCCESS;
}


/**
 Converti une chaine en majuscules

 @param chaine la chaine à convertir
 */
void minusculesVersMajuscules(char chaine[]) {

	for (int i = 0; i <strlen(chaine); i++)//Boucle qui défile sur la taille de la chaine de caractères
	{
		chaine[i] = toupper(chaine[i]);//Permet de rendre chaque caractère en majuscule
	}
}

