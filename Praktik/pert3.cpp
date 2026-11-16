#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* newNode;

Node* buatNode (int nilai) {
    return new Node{nilai, nullptr};
}

void traversal(Node* head) {

   
}


int main() {
    Node* pertama = buatNode(10);
    Node* head = pertama;
    Node* tail = pertama;

    cout << head->data << endl;
   // tambahAwal(head, tail, 5);
    cout << head->data << endl;
    cout << tail->data << endl;
    //tambahAkhir(head, tail, 15);
    cout << tail->data << endl;
    tambahTengah(head, tail, 7);
    cout << head->next->data << endl;

    traversal(head);
}