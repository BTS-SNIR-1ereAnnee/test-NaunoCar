//
//  le type char
//
#include <iostream>

using namespace std;

int main ()
{
   char lettre;
   int x;
   
   lettre='x';
   cout << "La taille en mémoire d'un char est " << sizeof(char) << " octet." << endl;
   // affichage des 5 lettres après lettre
   for(x=0;x<5;x++) {
      cout << lettre << "\t valeur entière : " << int(lettre);
      cout << "\t Sa taille en mémoire est " << sizeof(lettre) << " octet." << endl;
      lettre++;
   }
   return 0;
}
