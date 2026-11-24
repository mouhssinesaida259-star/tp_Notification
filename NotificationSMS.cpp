#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string destinataire, string  message, string operateur,string numero)
	:Notification(destinataire, message)
{
	this->operateur = operateur;
	this->numero = numero;
}

void NotificationSMS::afficher() const
{
	cout << "SMS | Numero : " << numero
		<< " | Operateur : " << operateur
		<< " | Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
	cout << "Envoi d'un SMS" << endl;
	afficher();
}

NotificationSMS::~NotificationSMS()
{
	cout << "le destructeur de la classe NotificationSMS" << endl;
}
