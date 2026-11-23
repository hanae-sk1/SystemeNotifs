#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string, string);
	virtual void afficher() ;
	virtual void envoyer()=0;
	virtual ~Notification();

};


