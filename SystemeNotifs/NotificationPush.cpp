#include "NotificationPush.h"

NotificationPush::NotificationPush(string id, string m, string app)
    : Notification(id, m) {

    this->application = app;
}

void NotificationPush::afficher() {
    cout << "PUSH | Utilisateur : " << this->destinataire
        << " | Application : " << this->application
        << " | Message : " << this->message << endl;
}

void NotificationPush::envoyer() {
    cout << "Envoi de la notification Push en cours" << endl;
}
