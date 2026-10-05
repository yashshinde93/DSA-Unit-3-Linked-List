#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node *next;
};

int main() {
    Node *head = NULL, *temp, *newNode;

    for(int i = 0; i < 3; i++) {
        newNode = new Node;

        cout << "Enter Employee ID and Name: ";
        cin >> newNode->id >> newNode->name;

        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    cout << "\nEmployee Records:\n";
    temp = head;

    while(temp != NULL) {
        cout << "ID: " << temp->id
             << " Name: " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}