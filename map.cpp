#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> grades;
   int choice, grade;
    string name, newName;
    while (true) {
        cout << "\n1. Add\n2. Remove\n3. Update Grade\n4. Fix Name\n5. Show\n6. Exit\n";
        cin >> choice;
        switch (choice) {
        case 1:
            // TODO: add student
            break;
        case 2:
            // TODO: remove student
            break;
        case 3:
            // TODO: update grade
            break;
        case 4:
            // TODO: fix typo in name
            break;
        case 5:
            // TODO: show all students
            break;
        case 6:
            return 0;
   }
    }
}


