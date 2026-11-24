#include "NotificationPush.h"

NotificationPush::NotificationPush(string destinataire, string message, string application)
	:Notification(destinataire,message)
{
	this->application = application;
}

void NotificationPush::afficher() const
{
	cout << "PUSH | Utilisateur : " <<this-> destinataire
		<< " |Application : " << this->application
		<< " |Message : " << this->message << endl;
}

void NotificationPush::envoyer()
{
	cout << "Envoi Notification Push..." << endl;
	afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "le destructeur de la classe NotificationPush" << endl;
}

