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


int Initialiser_Chambres(maillon_chambre tab[100]);
void Initialiser_Clients(structure_clients *);
