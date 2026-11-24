#include "Notification.h"
Notification::Notification(string destinatire, string message)
{
	this->destinataire = destinatire;
	this->message = message;
}

void Notification::afficher() const
{
	cout << "le destinataire est :" << this->destinataire << endl;
	cout << "le message :" << this->message << endl;
}

Notification::~Notification()
{
	cout << "le destructeur de la classe Notification" << endl;
}
