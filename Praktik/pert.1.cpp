#include <iostream>
using namespace std;

void balikArray(int data[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = data[i];
        data[i] = data[n - 1 - i];
        data[n - 1 - i] = tmp;
    }
}

int main() {
    const int KAPASITAS = 5;
    int data[KAPASITAS] = {10, 20, 30, 40, 50};

    //MENGUMPULKAN SUM
    // int total = 0;
    // for (int i = 0; i < KAPASITAS; i++) {
    //      total += data[i];
    // }
    // cout << "Total data array: " << total << endl;

    // //MENCARI
    // int maks = data[0];
    // for (int i = 1; i < KAPASITAS; i++) {
    //     if (data[i] > maks) {
    //         maks = data[i];
    //     }
    // }
    // cout << "Data terbesar array: " << maks << endl;

    //TUKAR URUTAN
    balikArray(data, KAPASITAS);
    for (int i = 0; i < KAPASITAS; i++) {
        cout << data[i] << " ";
    }

    return 0;
}