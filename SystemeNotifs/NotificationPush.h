#pragma once
#include "Notification.h"
class NotificationPush :
    public Notification
{
private:
    string application;

public:
    NotificationPush(string id, string m, string app);

    void afficher() override;

    void envoyer() override;
};

