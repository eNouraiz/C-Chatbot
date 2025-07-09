#pragma once
#include<iostream>
#include<string>
#include"D:\oops\Chatbot\Chatbot.h"

class angrybot :public Chatbot {
public:
	int angerlevel;
	void setangerlevel() { angerlevel = 100; }
	int getangerlevel() { return angerlevel; }
	
	void display()override {
		Chatbot::display();
		cout << "Anger level is " << angerlevel << endl;
	}
};