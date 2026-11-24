#pragma once
#include "Notification.h"
#include<iostream>
using namespace std;
class NotificatinEmail :public Notification
{
private:
	string objet;
public:
	NotificatinEmail(string, string, string);
	void afficher() const override;
	void envoyer();
	~NotificatinEmail();
};

