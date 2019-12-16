//
//
//  TP-Tableaux
//
//  Created by sylvain guilbert on 01/12/2019.
//  Copyright © 2019 PPR. All rights reserved.
//

#include <iostream>
#include <time.h>


// Déclaration des fonctions

void tri_bulle(int tableau[],int taille);

void tri_bulle_optimise(int tableau[],int taille);

void afficheTableau(int tableau[], int taille);

void tri_selection(int tableau[], int taille);

void tri_insertion(int tableau[], int taille);

//A vous de jouer ajoutez les déclarations manquantes

int main() {
   
   
   /************
    question 1&2
    *************/
   std::cout << "Tri à bulle..." << std::endl;
   int tab[8] = {12,1,4,5,168,58,70,158};
   afficheTableau(tab, 8);   
   tri_bulle(tab,8);
   afficheTableau(tab, 8);
   
   /************
    question 3
    *************/
   std::cout << std::endl << "Tri à bulle optimisé..." << std::endl;
   int tab2[] = {12,1,4,5,168,58,70,158};
   afficheTableau(tab2, 8);
   tri_bulle_optimise(tab2,8);
   afficheTableau(tab2, 8);
   
   /************
    question 4
    *************/
   std::cout << std::endl << "Tri par selection..." << std::endl;
   int tab3[] = {12,1,4,5,168,58,70,158};
   afficheTableau(tab3, 8);
   tri_selection(tab3,8);
   afficheTableau(tab3, 8);
   
   /************
    question 5
    *************/
   std::cout << std::endl << "Tri par insertion..." << std::endl;
   int tab4[] = {12,1,4,5,168,58,70,158};
   afficheTableau(tab4, 8);
   tri_insertion(tab4,8);
   afficheTableau(tab4, 8);


//   srand(time(NULL)); //initialisation de la seed
//   int tableau[100], tableau2[100], tableau3[100], tableau4[100];

//   for(int i=0;i<100;i++) // remplissage avec des valeur au hazard
//   {
//      tableau [i]=rand();
//
//   }
//   //Duplication des tableau
//   memcpy( tableau, tableau2, sizeof(tableau) );
//   memcpy( tableau, tableau3, sizeof(tableau) );
//   float temps;
//   clock_t t1, t2;
//   // mesure du temps écoulé pour tri_bulle();
//   t1 = clock();
//   tri_bulle(tableau2,100);
//   t2 = clock();
//   temps = (float)(t2-t1)/ ( CLOCKS_PER_SEC / 1000 );
//   std::cout << "temps tri à bulle opti = " << temps << " ms" << std::endl;

   // A vous de jouer pour les autres tri (utilisez tableauX)
   
   
   
   
   return 0;
}

// implémentation des fonctions

/********
 Fonction de tri à bulle simple
 *********/
void tri_bulle(int tableau[], int taille)
{
   int stock = 0, i; bool echange = true;//Déclaration des variables
   while(echange == true){//Boucle principale
      echange = false;//Permet de savoir quand la boucle doit s'arrêter
      for (i = 0; i < taille-1; i++){//Boucle secondaire
        if (tableau[i] > tableau[i+1]){//Vérification pour le tri
          stock = tableau[i+1];//Permet d'échanger les valeurs
          tableau[i+1] = tableau[i];//Permet d'échanger les valeurs
          tableau[i] = stock;//Permet d'échanger les valeurs
          echange = true;//Signifie qu'on a fait un changement dans le tableau
        }
      }
    }
}

/********
 Fonction de tri à bulle optimise
 *********/
void tri_bulle_optimise(int tableau[], int taille)
{
   int stock = 0, i; bool echange = true;//Déclaration des variables
   while(echange == true){//Boucle principale
      echange = false;//Permet de savoir quand la boucle doit s'arrêter
      for (i = 0; i < taille-1; i++){//Boucle secondaire
        if (tableau[i] > tableau[i+1]){//Vérification pour le tri
          stock = tableau[i+1];//Permet d'échanger les valeurs
          tableau[i+1] = tableau[i];//Permet d'échanger les valeurs
          tableau[i] = stock;//Permet d'échanger les valeurs
          echange = true;//Signifie qu'on a fait un changement dans le tableau
        }
      }
          taille--;//Permet de passer moins de fois dans la boucle
    }
}


/********
 Fonction de tri par séléction
 *********/
void tri_selection(int tableau[], int taille)
{
  int val, i, j, indice;//Déclaration des variables
  for (i = 0; i < taille-1; i++){//Boucle principale
    indice = i;
    for (j = i+1; j < taille; j++){//Boucle secondaire
      if (tableau[j] < tableau[indice])//Vérification
        indice = j;//Pour savoir quelle valeur échanger
    }
      val = tableau[indice];//Permet d'échanger les valeurs
      tableau[indice] = tableau[i];//Permet d'échanger les valeurs
      tableau[i] = val;//Permet d'échanger les valeurs
  }
}

/********
 Fonction de tri par insertion
 *********/
void tri_insertion(int tableau[], int taille)
{
  int i,j, stock, tableauTri[taille];//Déclaration des variables
  for (i =0; i < taille-1; i++){//Boucle permettant de défiler le tableau
      if (tableau[i] > tableau[i+1]){//Vérification
          stock = tableau[i+1];//Permet d'échanger les valeurs
          tableau[i+1] = tableau[i];//Permet d'échanger les valeurs
          tableau[i] = stock;//Permet d'échanger les valeurs
      }
  }
}

/**************
 Affiche un tableau sur une ligne séparé par des |
 ***************/
void afficheTableau(int tableau[], int taille)
{
   for (int i = 0; i < taille; i++){//Boucle pour afficher le tableau
    std::cout << "|" << tableau[i] << "|\t";//Affiche les éléments sur une ligne séparé par des |
   }
   std::cout << std::endl;//Saute une ligne après l'affichage du tableau
}
