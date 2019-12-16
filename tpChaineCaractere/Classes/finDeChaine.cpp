/*
 chaine de caractères
 L'importance du fin de chaine \0
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
   
   char chaine[] = "salut \0 hello"; 
   
   std::cout << "Une chaine de carractère: " << chaine << endl
   << " Nombre de carractère: "<< strlen(chaine)
   << " Taille du tableau en mémoire: "<< sizeof(chaine) << endl<< endl;
   
   return 0;
}

