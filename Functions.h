#pragma once
#include<iostream>
#include"D:\oops\Chatbot\Chatbot.h"
#include"D:\oops\Chatbot\Angerbot.h"
#include"D:\oops\Chatbot\Flirtbot.h"
#include"D:\oops\Chatbot\Formalbot.h"
#include"D:\oops\Chatbot\Functions.h"
#include"D:\oops\Chatbot\Funnybot.h"
#include<string>

using namespace std;


//prompt for AI by user
string prompt() {
    string input;
    cout << "Ask Anything: ";
    getline(cin, input);
    return input;
}

//Formal Bot
void formalfiling() {
    ifstream fin("D:\\oops\\Chatbot\\Filing\\Formal.txt");
    string line;
    string userInput = prompt();

    if (fin.is_open()) {
        if (
            (userInput == "HI") ||
            (userInput == "hi") ||
            (userInput == "Hello") ||
            (userInput == "hello")
            ) {
            if (getline(fin, line)) {
                cout << "Formal Bot: " << line << endl;
            }
            else {
                cout << "Formal Bot: File is empty bro " << endl;
            }
        }
        else if (userInput == "Bye" || userInput == "bye" || userInput == "Good bye" || userInput == "goodbye") {
            if (getline(fin, line)) getline(fin, line);
            if (getline(fin, line)) {
                cout << "Formal Bot: " << line << endl;
            }
            else {
                cout << "Formal Bot: No farewell line found" << endl;
            }
        }
        else if (userInput == "temprature" || userInput == "hot" || userInput == "cold") {
            if (getline(fin, line));
            if (getline(fin, line));
            if (getline(fin, line)) {
                cout << "Formal Bot: " << line << endl;
            }
            else {
                cout << "Formal Bot: Unable to find " << endl;
            }
        }
        else {
            cout << "Sorry im not trained for this yet" << endl;
        }

        fin.close();
    }
    else {
        cout << "Unable to open file :( " << endl;
    }
}

//Funny bot
void funnyfiling() {
    ifstream fin("D:\\oops\\Chatbot\\Filing\\Funny.txt");
    string line;
    string userInput = prompt();


    if (fin.is_open()) {
        if (
            (userInput == "HI") ||
            (userInput == "hi") ||
            (userInput == "Hello") ||
            (userInput == "hello")
            ) {
            if (getline(fin, line)) {
                cout << "Funny Bot: " << line << endl;
            }
            else {
                cout << "Funny Bot: File is empty bro " << endl;
            }
        }
        else if (userInput == "Bye" || userInput == "bye" || userInput == "Good bye" || userInput == "goodbye") {
            if (getline(fin, line)) getline(fin, line);
            if (getline(fin, line)) {
                cout << "Funny Bot: " << line << endl;
            }
            else {
                cout << "Funny Bot: No farewell line found" << endl;
            }
        }
        else if (userInput == "how are you" || userInput == "kiya hal ha" || userInput == "How are you") {
            if (getline(fin, line));
            if (getline(fin, line));
            if (getline(fin, line)) {
                cout << "Funny Bot: " << line << endl;
            }
            else {
                cout << "Funny Bot: Unable to find " << endl;
            }
        }
        else {
            cout << "Sorry im not trained for this yet" << endl;
        }

        fin.close();
    }

}

//Angry Bot
void Angryfiling() {
    ifstream fin("D:\\oops\\Chatbot\\Filing\\Angry.txt");
    string line;
    string userInput = prompt();


    if (fin.is_open()) {
        if (
            (userInput == "HI") ||
            (userInput == "hi") ||
            (userInput == "Hello") ||
            (userInput == "hello")
            ) {
            if (getline(fin, line)) {
                cout << "Angry Bot: " << line << endl;
            }
            else {
                cout << "Angry Bot: File is empty bro " << endl;
            }
        }
        else if (userInput == "Bye" || userInput == "bye" || userInput == "Good bye" || userInput == "goodbye") {
            if (getline(fin, line)) getline(fin, line);
            if (getline(fin, line)) {
                cout << "Angry Bot: " << line << endl;
            }
            else {
                cout << "Angry Bot: No farewell line found" << endl;
            }
        }
        else if (userInput == "how are you" || userInput == "kiya hal ha" || userInput == "How are you") {
            if (getline(fin, line));
            if (getline(fin, line));
            if (getline(fin, line)) {
                cout << "Angry Bot: " << line << endl;
            }
            else {
                cout << "Angry Bot: Unable to find " << endl;
            }
        }
        else {
            cout << "Sorry im not trained for this yet" << endl;
        }

        fin.close();
    }

}

//Flirt Bot
void Flirtfiling() {
    ifstream fin("D:\\oops\\Chatbot\\Filing\\Flirt.txt");
    string line;
    string userInput = prompt();


    if (fin.is_open()) {
        if (
            (userInput == "HI") ||
            (userInput == "hi") ||
            (userInput == "Hello") ||
            (userInput == "hello")
            ) {
            if (getline(fin, line)) {
                cout << "Flirt Bot: " << line << endl;
            }
            else {
                cout << "Flirt Bot: File is empty bro " << endl;
            }
        }
        else if (userInput == "Bye" || userInput == "bye" || userInput == "Good bye" || userInput == "goodbye") {
            if (getline(fin, line)) getline(fin, line);
            if (getline(fin, line)) {
                cout << "Flirt Bot: " << line << endl;
            }
            else {
                cout << "Flirt Bot: No farewell line found" << endl;
            }
        }
        else if (userInput == "how are you" || userInput == "kia hal ha" || userInput == "How are you") {
            if (getline(fin, line));

            if (getline(fin, line));
            if (getline(fin, line)) {
                cout << "Flirt Bot: " << line << endl;
            }
            else {
                cout << "Flirt Bot: Unable to find " << endl;
            }
        }
else if (userInput == "I love you" || userInput == "me tm se piyar krta hu" || userInput == "love you") {
    int lineToFetch = 4; // 4th line from file
    int currentLine = 0;

    while (getline(fin, line)) {
        currentLine++;
        if (currentLine == lineToFetch) {
            cout << "Flirt Bot: " << line << endl;
            break;
        }
    }

    if (currentLine < lineToFetch) {
        cout << "Flirt Bot: Unable to find line for 'I love you'" << endl;
    }
}


        else {
            cout << "Sorry im not trained for this yet" << endl;
        }

        fin.close();
    }

}

//Mood Selection
void moodselect(string username) {
    Chatbot* c = nullptr;
    string aimood;
    cout << "\nWhat mood you want for your AI?" << endl;
    cout << "Enter: fr (Formal), fl (Flirty), Ay (Angry), fn (Funny)" << endl;
    cin >> aimood;
    cin.ignore();

    cout << endl;

    if (aimood == "fr") {
        Formalbot* f = new Formalbot("Bot", "Neutral", 50, "English", "Assistant");
        c = f;
        c->display();
        formalfiling();
        delete f;
    }
    else if (aimood == "fl") {
        Flirtbot* fb = new Flirtbot();
        c = fb;
        c->display();
        Flirtfiling();
        delete fb;
    }
    else if (aimood == "fn") {
        Funnybot* fn = new Funnybot();
        c = fn;
        c->display();
        funnyfiling();
        delete fn;
    }
    else if (aimood == "Ay") {
        angrybot* ab = new angrybot();
        c = ab;
        c->display();
        Angryfiling();
        delete ab;
    }
    else {
        cout << "Invalid mood command! Please try again with: fr / fl / fn / Ay" << endl;
    }

    cout << "\nChat Ended. Have a nice day!" << endl;
}
void user() {
    int choice;
    string usersname;
    cout << "Enter your name: ";
    cin >> usersname;

    cout << "Hi " << usersname << "!" << endl;
    do {
        cout << "Type 1 to continue, 0 to exit: ";
        //cin.ignore();  // flush newline for getline to work properly next time
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            moodselect(usersname);
        }
    } while (choice == 1);
    cout << "Chat Ended. Have a nice day!" << endl;
}