#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int* astronaut = new int[N];

    for (int i = 0; i < N; i++) {
        astronaut[i] = i + 1;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "Urutan eliminasi: ";

    while (jumlah > 1) {
        posisi = (posisi + K - 1) % jumlah;

        int korban = astronaut[posisi];

        cout << korban << " ";

        for (int i = posisi; i < jumlah - 1; i++) {
            astronaut[i] = astronaut[i + 1];
        }

        jumlah--;

        if (korban % 2 == 0) {
            K += 2;
        } else {
            K--;
        }

        if (K < 2) {
            K = 2;
        }

        if (posisi == jumlah) {
            posisi = 0;
        }
    }

    cout << "\nAstronaut terakhir: " << astronaut[0] << endl;

    delete[] astronaut;

    return 0;
}