#include "Notification.h"

Notification::Notification(string d, string m) {
    this->destinataire = d;
    this->message = m;
}

void Notification::afficher () const{
    cout << "Destinataire : " << destinataire << endl;
    cout << "Message : " << message << endl;
}

Notification::~Notification() {
}