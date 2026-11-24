// Systeme_notification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Notification.h"
#include"NotificatinEmail.h"
#include"NotificationSMS.h"
#include"NotificationPush.h"
#include"GestionnaireNotifications.h"

int main()
{
  Notification *N1= new NotificatinEmail("sara@example.com","Nouvelle connexion detectee","Securite");
  Notification *N2 = new NotificationSMS ("0612345678", "Votre code est 4582", "0612345678", "Orange");
  Notification *N3 = new NotificationPush ("user_122", "Paiment confirme", "MyBank");

	Notification * tab[3] = { N1,N2,N3 };
	for (int i = 0;i < 3;i++) {
		tab[i]->afficher();
		tab[i]->envoyer();
		cout << endl;
	}
    GestionnaireNotifications G;

    G.ajouter(N1);
    G.ajouter(N2);
    G.ajouter(N3);

    G.envoyerToutes();

    
    delete N1;
    delete N2;
    delete N3;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
