#pragma once
#include<iostream>
using namespace std;
#include "Notification.h"
class NotificationSMS :public Notification
{
private:
	string operateur;
	string numero;
public:
	NotificationSMS(string, string, string,string);
	void afficher()const override;
	void envoyer();
	~NotificationSMS();
};

