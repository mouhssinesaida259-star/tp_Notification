#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
	compteur = 0;
}

void GestionnaireNotifications::ajouter(Notification* n)
{
	if (compteur < 100) {
		tab[compteur] = n;
		compteur++;
	}
	else {
		cout << "le tableau est plein!!" << endl;
	}
}

void GestionnaireNotifications::envoyerToutes()
{
	for (int i = 0;i < compteur;i++) {
		tab[i]->envoyer();
		cout << endl;
	}
}

GestionnaireNotifications::~GestionnaireNotifications()
{
	cout << "le destructeur de la classe gest_notification" << endl;
}
