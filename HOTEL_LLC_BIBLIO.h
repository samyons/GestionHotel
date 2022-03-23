// On initialise une structure maillon chambre qui représente une chambre.
struct maillon_chambre {
    int numero, type, prix, dispoTV, etat;
};

typedef struct maillon_chambre maillon_chambre;

// On initialise une structure maillon client qui représente un client.
struct maillon_client {
    int code;
    char prenom[20], nom[20], nin[9], tel[10];
    struct maillon_client * suivant;
};
typedef struct maillon_client maillon_client;

// On initialise une structure liste clients qui contiendra tous les clients.
struct structure_clients {
    maillon_client* tete;
    maillon_client* queue;
};
typedef struct structure_clients structure_clients;

struct structure_reservations {
    int ref;
    int nbrNuits;
    int dateRes[3];
    int dateSesJours[3];
    int nbrPersonnes;
    int chmbreRes;
    int Client;
    int Montant;
};
typedef struct structure_reservations structure_reservations;

struct structure_reservation {
    structure_reservations * tete;
    structure_reservations * queue;
};
typedef struct maillon_reservation  structure_reservation;

int Initialiser_Chambres(maillon_chambre tab[100]);
int Initialiser_Clients(structure_clients *);
int Initialiser_Reservations(structure_reservations *);