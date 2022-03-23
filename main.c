#include <stdio.h>
#include <stdlib.h>
#include "HOTEL_LLC_BIBLIO.h"

int main( )
{
    structure_clients liste_clients;
    maillon_chambre tabChambres[100];
    structure_reservations liste_reservations;

    Initialiser_Clients(&liste_clients);
    Initialiser_Chambres(tabChambres);
    Initialiser_Reservations(&liste_reservations);
}

