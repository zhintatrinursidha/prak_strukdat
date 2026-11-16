#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct Queue{
    Node *front;
    Node *rear;
};

// supaya ga perlu interval. biar jelas pembagian tugasnya.

Queue init() {
    return Queue{nullptr, nullptr};
}

bool isEmpty(Queue &q) {
    return q.front == nullptr;
}

bool enqueue(Queue &q, int nilai) {
    Node* baru = new Node{nilai, nullptr};

    if(isEmpty(q)){
        q.front = baru;
        q.rear = baru ;
    } else {
        q.rear->next = baru;
        q.rear = baru;
    }
    return true;
}

bool dequeue(Queue &q) {
    if(isEmpty(q)){
        return false;
    }

        Node* hapus = q.front;
    
        q.front = q.front->next;

        if(q.front == nullptr){
            q.rear = nullptr;
        }

        delete hapus;
        return true;
}

bool peek(Queue &q) {
    if(isEmpty(q)){
        return false;
    }

    int nilaiDepan = q.front->data;
    cout << "Nilai Depan: " << nilaiDepan << endl;

    int nilaiBelakang = q.rear->data;
    cout << "Nilai Belakang: " << nilaiBelakang << endl;

    return true;
}

void tampilkan(Queue &q) {
    if(isEmpty(q)){
        cout << "Kosong Banggg" << endl;
        return;
    }

    Node* bantu = q.front;

    cout << "Isi dari Queue: ";

    while(bantu != nullptr){ // karena kita gatau jumlah datanya berapa
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;

}

void clear(Queue &q) {
    while(isEmpty(q)) {
        dequeue(q);
    }

    q.front = nullptr;
    q.rear = nullptr;
}

int main() {
    Queue urutan = init();

    enqueue(urutan, -59);
    enqueue(urutan, 26);
    enqueue(urutan, 13);
    enqueue(urutan, 42);

    // dequeue(urutan);
    peek(urutan);
    tampilkan(urutan);
}