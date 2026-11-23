#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string d, string m, string o)
    : Notification(d, m) {

    objet = o;
}

void NotificationEmail::afficher() {
    cout << "EMAIL | À : " << this->destinataire
        << " | Objet : " << this->objet
        << " | Message : " << this->message << endl;
}

void NotificationEmail::envoyer() {
    cout << "Envoi de l'email en cours" << endl;
}