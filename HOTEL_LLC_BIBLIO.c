#include <stdio.h>
#include <stdlib.h>
#include "HOTEL_LLC_BIBLIO.h"

/* La fonction "Initialiser_Chambres" récupère les informations sur les chambres à partir du
   fichier "chambres.txt" puis les insère dans le tableau tab[100] sous forme de maillons "maillon_chambre". */

int Initialiser_Chambres(maillon_chambre tab[100]) {
    FILE* fichierChambres = NULL;
    fichierChambres = fopen("chambres.txt", "r");
    if (fichierChambres != NULL) {
        maillon_chambre* pointeurChambre;
        for (int i = 0; i < 100; ++i) {
            pointeurChambre = (maillon_chambre *) malloc(sizeof(maillon_chambre));
            tab[i] = *pointeurChambre;
            fscanf(fichierChambres, "%d %d %d %d %d\n", &(tab[i].numero), &(tab[i].type), &(tab[i].prix), &(tab[i].dispoTV), &(tab[i].etat));
        }
        fclose(fichierChambres);
        return 0;
    }
    else {
        printf("Impossible d'ouvrir le fichier chambres.txt.\n");
        return -1;
    }
}

/* La fonction "Initialiser_Clients" récupère les informations sur les clients à partir du
   fichier "clients.txt" puis les insère une liste linéaire chaînée. */

int Initialiser_Clients(structure_clients * liste) {
    FILE * fichierClients = NULL;
    fichierClients = fopen("clients.txt", "r");

    maillon_client * pointeurClient;
    (*liste).tete = NULL;
    (*liste).queue = NULL;

    int totalClients;
    fscanf(fichierClients, "%d", &totalClients);

    if (fichierClients != NULL) {
        while (!feof(fichierClients)) {
            pointeurClient = (maillon_client *) malloc(sizeof(maillon_client));
            fscanf(fichierClients,"%d %s %s %s %s", &(pointeurClient -> code), &(pointeurClient -> prenom), &(pointeurClient -> nom), &(pointeurClient -> nin), &(pointeurClient -> tel));
            if ((*liste).tete == NULL) {
                (*liste).tete = pointeurClient;
                (*liste).queue = pointeurClient;
            }
            else {
                ((*liste).queue)->suivant = pointeurClient;
                (*liste).queue = pointeurClient;
            }
        }
        ((*liste).queue)->suivant = NULL;
    }
    fclose(fichierClients);
    return totalClients;
}


int Initialiser_Reservations(structure_reservations *liste ) {
    structure_reservations *structureDeReservationsRes;
    FILE *fichierReservation;
    fichierReservation = fopen("reservations.txt", "r");
    if (fichierReservation!= NULL) {
        fscanf("%d %d %d %d %d %d %d %d %d %d %d %d",)
        fclose(fichierReservation);
        return 0;
    }
    else {
        printf("Impossible d'ouvrir le fichier chambres.txt.\n");
        return -1;
    }

}

