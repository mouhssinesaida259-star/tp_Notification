#pragma once
#include "Notification.h"
#include<iostream>
using namespace std;
class NotificationPush :public Notification
{
private:
	string application;
public:
	NotificationPush(string, string, string);
	void afficher()const override;
	void envoyer();
	~NotificationPush();
};

