#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> cart;
    int choice, pos;
    string item;
    do {
        cout << "\n====== Shopping Cart ======\n";
        cout << "1. Add item to back\n";
        cout << "2. Add item to front\n";
        cout << "3. Remove last item\n";
        cout << "4. Remove first item\n";
        cout << "5. Remove item at position\n";
        cout << "6. Show all items\n";
        cout << "7. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Item: ";
              getline(cin, item);
            // TODO 1 : add item to back
            break;
        case 2:
            cout << "Item: ";
            getline(cin, item);
            // TODO 2 : add item to front using insert
            break;
        case 3:
            // TODO 3 : Remove safely only if not empty
            break;
        case 4:
            // TODO 4 : remove first item using erase
            break;
        case 5:
            cout << "Position: ";
              cin >> pos;
            // TODO 5 : remove item at position using iterators
            break;
        case 6:
            // TODO 6 : display all items using iterators
            break;
        }
    } while (choice != 7);
    return 0;
}


