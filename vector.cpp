
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>
using namespace std;

int main() {
    vector<string> cart;
    int choice, pos;
    string item;

    do {
        cout << "\n  Shopping Cart \n";
        cout << "1. Add item to back\n";
        cout << "2. Add item to front\n";
        cout << "3. Remove last item\n";
        cout << "4. Remove first item\n";
        cout << "5. Remove item at position\n";
        cout << "6. Show all items\n";
        cout << "7. Count item occurrences\n";
        cout << "8. Sort items alphabetically\n";
        cout << "9. Search for an item\n";
        cout << "10. Sort items by length\n";
        cout << "11. Display items in uppercase\n";
        cout << "12. Exit\n";
        cout << "Choice: ";
        if (!(cin >> choice)) {
            if (cin.eof()) {
                break;
            }
        
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {

        case 1:
            cout << "Item: ";
            getline(cin, item);
            
            cart.push_back(item);
            break;

        case 2:
            cout << "Item: ";
            getline(cin, item);
            
            cart.insert(cart.begin(), item);
            break;

        case 3:
            
            if (!cart.empty()) {
                cart.pop_back();
                cout << "Last item removed.\n";
            } else {
                cout << "Cart is empty!\n";
            }
            break;

        case 4:
            
            if (!cart.empty()) {
                cart.erase(cart.begin());
                cout << "First item removed.\n";
            } else {
                cout << "Cart is empty!\n";
            }
            break;

        case 5:
            cout << "Position (starting from 1): ";
            if (!(cin >> pos)) {
                if (cin.eof()) {
                    choice = 12;
                    break;
                }
            
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
                cout << "Invalid position!\n";
                break;
            }
            
            if (pos >= 1 && pos <= static_cast<int>(cart.size())) {
                cart.erase(cart.begin() + (pos - 1));
                cout << "Item removed.\n";
            } else {
                cout << "Invalid position!\n";
            }
            break;

        case 6:
            
            if (cart.empty()) {
                cout << "Cart is empty!\n";
            } else {
                int i = 1;
                for (auto it = cart.begin(); it != cart.end(); ++it) {
                    cout << i++ << ". " << *it << endl;
                }
            }
            break;

        

        case 7: {
            cout << "Enter item to count: ";
            getline(cin, item);

            int occurrences = count(cart.begin(), cart.end(), item);

            cout << item << " appears " << occurrences
                 << " time(s).\n";
            break;
        }

        case 8:
            sort(cart.begin(), cart.end());
            cout << "Items sorted alphabetically:\n";
            for (const string& product : cart) {
                cout << product << endl;
            }
            break;

        case 9: {
            cout << "Enter item to search: ";
            getline(cin, item);

            auto it = find(cart.begin(), cart.end(), item);

            if (it != cart.end()) {
                cout << "Item found!\n";
            } else {
                cout << "Item not found!\n";
            }
            break;
        }

        

        case 10:
            sort(cart.begin(), cart.end(),
                 [](const string& a, const string& b) {
                     return a.length() < b.length();
                 });

            cout << "Items sorted by length:\n";
            for (const string& product : cart) {
                cout << product << endl;
            }
            break;

        case 11:
            cout << "Items in uppercase:\n";

            for (const string& product : cart) {
                string upper = product;

                transform(upper.begin(), upper.end(), upper.begin(),
                          [](unsigned char c) {
                              return static_cast<char>(toupper(c));
                          });

                cout << upper << endl;
            }
            break;

        case 12:
            cout << "Exiting shopping cart...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 12);

    return 0;
}
