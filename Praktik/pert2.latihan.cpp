#include <iostream>
using namespace std;

void max(int *a, int n) {
    int maks = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] < maks){
            maks = a[1];
        }
    }
    cout << maks;
}

int main () {
    const int KAP
    int a[KAP] = {10, 20,30}
    cout << (*a) << endl;
    max(a, KAP);
}