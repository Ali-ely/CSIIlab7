#include <iostream>
#include <set>
using namespace std;
int main() {
    set<string> courses;
    int choice;
    string course, newCourse;
    while (true) {
        cout << "\n1. Add\n2. Remove\n3. Update\n4. Show\n5. Exit\n";
        cin >> choice;
        switch (choice) {
        case 1:
            // TODO: add course
            break;
        case 2:
            // TODO: remove course
            break;
        case 3:
            // TODO: update course (remove then insert)
            break;
        case 4:
            // TODO: show all courses
            break;
        case 5:
            return 0;
        }
    }
}

