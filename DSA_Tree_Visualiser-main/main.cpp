#include "tree.h"
#include "json.h"
#include <iostream>

using namespace std;

int main() {
    BST tree;
    int choice, value;

    while (true) {
        cout << "\n1. Insert\n2. Delete\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            tree.insert(value);
        }
        else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;
            tree.deleteValue(value);
        }
        else break;

        writeJSONToFile(tree.getRoot());
        cout << "Tree updated! Check output.json\n";
    }

    return 0;
}
