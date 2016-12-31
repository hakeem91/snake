#include <stdio.h>
#include <graph.h>

void menu();
void config();
void affichage(int);

void menu() {
  ChoisirCouleurDessin(CouleurParNom("green"));
  EcrireTexte(117, 50, "Snake", 2);

  ChoisirCouleurDessin(CouleurParNom("grey"));
  EcrireTexte(85, 130, "Lancer une partie", 1);

  EcrireTexte(75, 180, "Configurer la partie", 1);

  EcrireTexte(100, 230, "Quitter le jeu", 1);

  // DessinerRectangle(85, 115, 138, 17); 
  // DessinerRectangle(75, 165, 153, 17);
  // DessinerRectangle(100, 215, 103, 17);
 
  int fin = 0;

  while (!fin) {
    SourisCliquee();
    if ((_X) >= 85 && (_Y) >= 115 && (_X) < 223 && (_Y) < 132) { // Lancer la partie
      fin = 1;
    }
    if ((_X) >= 75 && (_Y) >= 165 && (_X) < 228 && (_Y) < 182) { // Configurer la partie
      fin = 1;
      config();
    }
    if ((_X) >= 100 && (_Y) >= 215 && (_X) < 203 && (_Y) < 232) { // Quitter le game
      fin = 1;
    }
  }
}

void config() {
  ChoisirCouleurDessin(CouleurParNom("white"));
  RemplirRectangle(0, 0, 300, 350);
  ChoisirCouleurDessin(CouleurParNom("black"));
  EcrireTexte(45, 50, "Configuration de la partie", 1);
  ChoisirCouleurDessin(CouleurParNom("grey"));
  EcrireTexte(55, 110, "Taille de la grille de jeu", 1);
  ChoisirCouleurDessin(CouleurParNom("lightgrey"));
  RemplirRectangle(80, 125, 7, 7);
  RemplirRectangle(80, 138, 7, 7);
  affichage(32);
  EcrireTexte(143, 140, "x", 1);
  RemplirRectangle(165, 125, 40, 20);
  ChoisirCouleurDessin(CouleurParNom("grey"));
  EcrireTexte(70, 175, "Nombre de pastilles", 1);
  ChoisirCouleurDessin(CouleurParNom("lightgrey"));
  RemplirRectangle(130, 190, 40, 20);
  ChoisirCouleurDessin(CouleurParNom("grey"));
  EcrireTexte(82, 240, "Taille du serpent", 1);
  ChoisirCouleurDessin(CouleurParNom("lightgrey"));
  RemplirRectangle(130, 255, 40, 20);
  ChoisirCouleurDessin(CouleurParNom("black"));
  EcrireTexte(82, 315, "Revenir au menu", 1);
  // DessinerRectangle(81, 300, 134, 17);

  int fin = 0, fin_saisie = 0;
  while (!fin) {
    SourisCliquee();
    if ((_X) >= 80 && (_Y) >= 125 && (_X) < 87 && (_Y) < 132) { // ++
      
    }
    if ((_X) >= 81 && (_Y) >= 300 && (_X) < 304 && (_Y) < 317) { // Revenir au menu
      fin = 1;
      ChoisirCouleurDessin(CouleurParNom("white"));
      RemplirRectangle(0, 0, 300, 350);
      menu();
    }
  }
}

void affichage(int entier) {
  ChoisirCouleurDessin(CouleurParNom("lightgrey"));
  RemplirRectangle(90, 125, 40, 20);
  if (entier >= 10) {
    int dizaine = entier / 10;
    int unite = entier % 10;
    char entierTab[3] = {'0', '0', '\0'};
    entierTab[0] = '0' + dizaine;
    entierTab[1] = '0' + unite;
    EcrireTexte(10, 140, entierTab, 1);
  }
  // else if (entier < 10)
}

void main() {
  InitialiserGraphique();
  CreerFenetre(20, 20, 300, 350);
  
  menu();
  
  FermerGraphique();
}
