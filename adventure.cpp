#include <iostream>
#include <istream>
#include <string>
using namespace std;

int main(){
    cout << "Welcome to the Dragon Realm!" << endl;
    string playerName;
    cout << "What is your name?" << endl;
    getline (cin, playerName);
    int choice;
    cout << "Where will " << playerName << " go?" << endl;
    cout << "1. Moonlight Markets" << endl;
    cout << "2. Grand Library" << endl;
    cout << "3. Shimmer Lake" << endl;
    cout << "Please make your choice: " << endl;
    cin >> choice;

    // if (choice == 1){
    //     cout << "You chose Moonlight Markets." << endl;
    // } else if (choice == 2){
    //     cout << "You chose Grand Library." << endl;
    // } else if (choice == 3){
    //     cout << "You chose Shimmer Lake." << endl;
    // } else {
    //     cout << "You have strayed and went missing." << endl << "The end." << endl;
    // }

    switch (choice){
        case 1:
            cout << "You chose Moonlight Markets. It is the most busy place within the Elven Ranges, bustling with commerce and travellers looking to ease their weary bodies." << endl << "You see a beggar walking towards you and asks if you can spare a coin. What would " << playerName << " do?" << endl;
            cout << "1. Spare a coin" << endl;
            cout << "2. Ignore" << endl;
            int nestChoice;
            cin >> nestChoice;

            if (nestChoice == 1){
                cout << "The beggar thank you and provided more information about the locale you're in.";
            } else if (nestChoice == 2){
                cout << "The beggar leaves you alone.";
            } else {
                cout << "You did nothing and was shanked." << endl << "The end." << endl;
            }
            
            break;
        case 2:
            cout << "You chose Grand Library." << endl;
            break;
        case 3:
            cout << "You chose Shimmer Lake." << endl;
            break;
        default:
            cout << "You have strayed and went missing." << endl << "The end." << endl;
    }

    return 0;
}