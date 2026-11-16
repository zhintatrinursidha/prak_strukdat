#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;
Node* newNode = nullptr;
Node* temp = nullptr;
Node* del = nullptr;

bool listkosong() {
    return (head == nullptr);
}

void cetakMaju() {
    if(listkosong()) {
        cout << "list masih kosong" << endl;
    } else {
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void cetakMundur() {
    if(listkosong()) {
        cout << "list masih kosong" << endl;
    } else {
        temp = tail;                    //bedanya tail
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;          //bedanya prev
        }
        cout << endl;
    }
}

void sisiDepan(int data) {
    newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    if(listkosong()) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void sisiBelakang(int data) {
    newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    if(listkosong()) {
        head = tail = newNode;
    } else {
        newNode->prev = tail;   //bedanya prev n tail
        tail->next = newNode;   //bedanya tail
        tail = newNode;         //bedanya tail
    }
}

void sisipTengah(int data) {
    newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    temp = head;

    while(temp->next != nullptr && temp->next->data > data) {
        temp = temp->next;

    }
    newNode->next = temp->next;

    if(temp->next != nullptr) {
        temp->next->prev = newNode;
    }  
   temp->next = newNode;   
   newNode->prev = temp;
}

int main() {
    sisiDepan(10);
    sisiBelakang(20);
    sisiBelakang(30);
    sisiBelakang(40);
    sisipTengah(11);
    sisipTengah(21);
    cetakMaju();
    cetakMundur();

}