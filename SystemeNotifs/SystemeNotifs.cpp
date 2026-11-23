// SystemeNotifs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"

using namespace std;

int main() {

   

    NotificationEmail e("hanae@example.com","Nv connexion", "Sécurité" );

    NotificationSMS s("0600000000", "Votre code est 4444", "INWI");

    NotificationPush p( "AGENT", "Paiement confirmé","CIH");

    Notification* tab[3];

    tab[0] = &e;
    tab[1] = &s;
    tab[2] = &p;

    for (int i = 0; i < 3; i++) {
        tab[i]->afficher();
        tab[i]->envoyer();
    }

    GestionnaireNotifications gestionnaire;

    gestionnaire.ajouter(&e);
    gestionnaire.ajouter(&s);
    gestionnaire.ajouter(&p);

    cout << "envoyer tout" << endl;

    gestionnaire.envoyerToutes();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
