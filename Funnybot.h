#pragma once
#include<iostream>
#include<string>
#include"D:\oops\Chatbot\Chatbot.h"
using namespace std;
	
class Funnybot :public Chatbot {
public:
void display()override{
	Chatbot::display();
	cout<<"Funny bot ready "<<endl;

}
};