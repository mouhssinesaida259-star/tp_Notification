#include "NotificatinEmail.h"

NotificatinEmail::NotificatinEmail(string destinataire, string message, string objet)
	:Notification(destinataire,message)
{
	this->objet = objet;
}

void NotificatinEmail::afficher() const
{
	cout << "EMAIL | A : " << this->destinataire
		<< " | Objet : " << this->objet
		<< " | Message : " <<this-> message << endl;
}

void NotificatinEmail::envoyer()
{
	cout << "Envoi d'un Email" << endl;
	afficher();
}

NotificatinEmail::~NotificatinEmail()
{
	cout << "le destructeur de la classe NotificationEmail" << endl;
}
