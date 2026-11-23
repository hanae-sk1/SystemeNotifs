#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications() {
    this->compteur = 0;
}

void GestionnaireNotifications::ajouter(Notification* n) {
    if (this->compteur < 100) {
        this->tab[this->compteur] = n;
        this->compteur++;
    }
}

void GestionnaireNotifications::envoyerToutes() {
    for (int i = 0; i < this->compteur; i++) {
        this->tab[i]->envoyer();
    }
}