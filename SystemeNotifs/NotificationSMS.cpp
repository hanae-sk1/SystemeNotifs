#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string num, string m, string op)
    : Notification(num, m) {

    this->operateur = op;
}

void NotificationSMS::afficher() {
    cout << "SMS | Numéro : " << this->destinataire
        << " | Opérateur : " << this->operateur
        << " | Message : " << this->message << endl;
}

void NotificationSMS::envoyer() {
    cout << "Envoi du SMS en cours" << endl;
}