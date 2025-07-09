#pragma once
#include<iostream>
#include<string>
#include"D:\oops\Chatbot\Chatbot.h"

class Flirtbot : public Chatbot {
public:
	
void display()override{
		Chatbot::display();
		cout << "Boldness set to 50%" << endl;
	}
};