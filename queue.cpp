#include <iostream>
#include <queue>
using namespace std;
void showQueue(queue<int>& q) {
    // TODO 1: Create a temporary copy of the queue
    // TODO 2: Check if the queue is empty
    // If empty, print "Queue is empty" and return
    // TODO 3: Loop until the temporary queue becomes empty
    // Inside loop:
    // - Print the front element
    // - Remove the front element
    // TODO 4: Print a new line at the end
}
int main() {
    queue<int> ticketQueue;
    int option;
    int ticketNumber = 1;
    while (true) {
        cout << "\n1. Take ticket\n";
        cout << "2. Serve next\n";
        cout << "3. Show tickets\n";
        cout << "4. Exit\n";
        cin >> option;
        switch (option) {
        case 1:
            // TODO: push ticket number
            break;
        case 2:
             // TODO: serve ticket safely
            break;
        case 3:
            // TODO: show queue
            break;
        case 4:
            return 0;
        }
    }
}

