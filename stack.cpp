#include <iostream>
#include <stack>
#include <string>
using namespace std;
void showHistory(stack<string>& s) {
// TODO : create a temporary copy of stack
// TODO : check if empty
// TODO : display stack without losing elements
}
int main() {
    stack<string> history;
    int choice;
    string action;
    while (true) {
        cout << "\n1. Add action\n";
        cout << "2. Undo\n";
        cout << "3. Show history\n";
        cout << "4. Exit\n";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            // TODO: push action
            break;
             case 2:
            // TODO: undo last action safely
            break;
        case 3:
            // TODO: show history
            break;
        case 4:
            return 0;
        }
    }
}


