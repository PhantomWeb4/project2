#include <stdio.h>

// Déclaration de la structure pour un personnage
struct Personnage {
    int pointsDeVie;
    int force;
    int vitesse;
};

// Fonction pour comparer les caractéristiques des trois personnages
void comparerPersonnages(struct Personnage p1, struct Personnage p2, struct Personnage p3) {
    // Comparaison de la force
    if (p1.force > p2.force && p1.force > p3.force) {
        printf("%s est le plus fort.\n", "Sonic");
    }
    else if (p2.force > p1.force && p2.force > p3.force) {
        printf("%s est le plus fort.\n", "SuperSonic");
    }
    else if (p3.force > p1.force && p3.force > p2.force) {
        printf("%s est le plus fort.\n", "MegaSonic");
    }
    else {
        printf("Il y a une égalité en termes de force.\n");
    }

    // Comparaison de la vitesse
    if (p1.vitesse > p2.vitesse && p1.vitesse > p3.vitesse) {
        printf("%s est le plus rapide.\n", "Sonic");
    }
    else if (p2.vitesse > p1.vitesse && p2.vitesse > p3.vitesse) {
        printf("%s est le plus rapide.\n", "SuperSonic");
    }
    else if (p3.vitesse > p1.vitesse && p3.vitesse > p2.vitesse) {
        printf("%s est le plus rapide.\n", "MegaSonic");
    }
    else {
        printf("Il y a une égalité en termes de vitesse.\n");
    }

    // Comparaison santé
    if (p1.pointsDeVie > p2.pointsDeVie && p1.pointsDeVie > p3.pointsDeVie) {
        printf("%s a le plus de vie.\n", "Sonic");
    }
    else if (p2.pointsDeVie > p1.pointsDeVie && p2.pointsDeVie > p3.pointsDeVie) {
        printf("%s a le plus de vie.\n", "SuperSonic");
    }
    else if (p3.pointsDeVie > p1.pointsDeVie && p3.pointsDeVie > p2.pointsDeVie) {
        printf("%s a le plus de vie.\n", "MegaSonic");
    }
    else {
        printf("Il y a une égalité en termes de santé.\n");
    }
}

int main() {
    // Création de trois personnages
    struct Personnage sonic, superSonic, megaSonic;

    // Initialisation des caractéristiques de Sonic
    sonic.pointsDeVie = 100;
    sonic.force = 20;
    sonic.vitesse = 15;

    // Initialisation des caractéristiques de SuperSonic
    superSonic.pointsDeVie = 120;
    superSonic.force = 25;
    superSonic.vitesse = 25;

    // Initialisation des caractéristiques de MegaSonic
    megaSonic.pointsDeVie = 80;
    megaSonic.force = 30;
    megaSonic.vitesse = 20;

    // Comparaison des personnages
    printf("Comparaison des personnages :\n");
    comparerPersonnages(sonic, superSonic, megaSonic);

    return 0;
}

