#include <stdio.h>
#include "mv.h"

    

int main(){

        int option;
        
        do
        {
            printf("\n----------MENU----------\n\n");
            printf("1) Ajouter un etudiant\n");
            printf("2) Saisir les notes d'un etudiant\n");
            printf("3) Afficher tous les etudiants\n");
            printf("4) Afficher bulletin d'un etudiant\n");
            printf("5) Calculer la moyenne genrale\n");
            printf("6) Recherchez par nom/prenom\n");
            printf("7) sort by moyenne");
            printf("8) sort by nom");
            printf("0) Quitter\n");
            printf("le choix : ");
            scanf("%d",&option);

            switch (option)
            {
            case 1:

                ajouterEtudiant();

                break;
            case 2:

                sasirNotes();
                calculerMoyenneEtudiant();

                break;
            case 3:

                afficherEtudiants();
                
                break;
            case 4:

                afficherBulletin();

                break;
            case 5:

                calculerMoyenneGenerale();

                break;

            case 6:
                searchByName();
                break;
            
            case 7:
                sortByMoyenne();
                afficherEtudiants();

                break;

            case 8:
                sortByNom();
                afficherEtudiants();

            default:
                break;
            }


        } while (option!=0);

        printf("Merci d'avoir utilise le programme. Au revoir !");

        return 0;
    }