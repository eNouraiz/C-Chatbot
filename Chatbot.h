#pragma once
#include<iostream>
#include<string>
using namespace std;

class Chatbot {
protected:
    string botname;
    string mood;
    int energylevel;

public:
    Chatbot() {
        botname = "Bot";
        mood = "Neutral";
        energylevel = 50;
    }

    Chatbot(string inpbname, string inpmood, int inpelevel) {
        botname = inpbname;
        mood = inpmood;
        energylevel = inpelevel;
    }

    virtual void display() {
        cout << "Name of bot is " << botname 
             << ", mood is " << mood 
             << ", energy level is " << energylevel << endl;
    }

    virtual ~Chatbot() {}
};
