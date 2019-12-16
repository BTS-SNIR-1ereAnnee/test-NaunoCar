/*
 Conversion d'une chaine en entier
 */
#include <iostream>
#include <cstring>
#include <math.h>

bool valide_entier(char chaine[], int &refNombreEntier);

int main() {
   
   int nombreEntier;
   char chaine[20];
   
   do {
      std::cout << "Tapez une chaîne de caractères : ";
      std::cin >> chaine;
   } while (!valide_entier(chaine, nombreEntier));
   
   std::cout << "L'entier vaut : " << nombreEntier << std::endl;
   return EXIT_SUCCESS;
}


/**
 valide une chaine de caractère
 retourne la valeur entière

 @param chaine la chaine à valider
 @param refNombreEntier le nombre entier converti
 @return true si la chaine est un entier false sinon
 */
bool valide_entier(char chaine[], int &refNombreEntier) {
   
   bool valide = true;
   int i;

   for (i = 0; i < strlen(chaine); i++){//Boucle qui permet de parcourir la chaine
      if (isdigit(chaine[i]) == false)//Vérification s'il y a autre chose que des chiffres
         return false;//Renvoie faux s'il y a autre chose que des chiffres
      if (i ==  0)//Pour que ça ne marche qu'au premier chiffre
         refNombreEntier = chaine[i] - 48;
      else
         refNombreEntier = refNombreEntier * 10 + (chaine[i]-48); 

   }
   
   return valide;
}
