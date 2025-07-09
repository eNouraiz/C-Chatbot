#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"D:\oops\Chatbot\Chatbot.h"
using namespace std;

class Formalbot :public Chatbot {
protected:
	string language;
	string designation;
public:
	Formalbot() {
		language = "English";
		designation = "N/A";
	}
	Formalbot(string inpbname, string inpmood, int inpelevel, string lang, string inpdesignation) :Chatbot(inpbname, inpmood, inpelevel) {
		language = lang;
		designation = inpdesignation;
	}
	void display()override {
		Chatbot::display();
		cout << "Language set " << language << " and designaton " << designation << endl;
	}
		
};