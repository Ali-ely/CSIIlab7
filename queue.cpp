
#include <iostream>
#include <queue>
#include <limits>
using namespace std;

void showQueue(queue<int>& q) {

        queue<int> temp = q;

        if (temp.empty()) {
        cout << "Queue is empty!\n";
        return;
    }

       while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

       cout << endl;
}

int main() {

    queue<int> ticketQueue;
    int option;
    int ticketNumber = 1;

    do {
        cout << "\n====== Ticket System ======\n";
        cout << "1. Take ticket\n";
        cout << "2. Serve next\n";
        cout << "3. Show tickets\n";
        cout << "4. Exit (original option)\n";
        cout << "5. Count tickets greater than N\n";
        cout << "6. Exit\n";
        cout << "Enter option: ";

        if (!(cin >> option)) {
            if (cin.eof()) {
                break;
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input!\n";
            continue;
        }

        switch (option) {

        case 1:
            ticketQueue.push(ticketNumber);
            cout << "Ticket " << ticketNumber
                 << " issued.\n";
            ticketNumber++;
            break;

        case 2:
         
            if (!ticketQueue.empty()) {
                cout << "Serving ticket "
                     << ticketQueue.front() << endl;
                ticketQueue.pop();
            } else {
                cout << "No tickets to serve.\n";
            }
            break;

        case 3:
            
            showQueue(ticketQueue);
            break;

        case 4:
            cout << "Use option 6 to exit.\n";
            break;

                case 5: {
            int N;
            cout << "Enter value N: ";

            if (!(cin >> N)) {
                if (cin.eof()) {
                    option = 6;
                    break;
                }

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid number!\n";
                break;
            }

                       queue<int> temp = ticketQueue;

            int countGreater = 0;

            while (!temp.empty()) {

                
                if (temp.front() > N) {
                    countGreater++;
                }

                temp.pop();
            }

            
            cout << "Number of tickets greater than "
                 << N << ": " << countGreater << endl;

            break;
        }

        case 6:
            cout << "Exiting Ticket System...\n";
            break;

        default:
            cout << "Invalid option!\n";
        }

    } while (option != 6);

    return 0;
}
