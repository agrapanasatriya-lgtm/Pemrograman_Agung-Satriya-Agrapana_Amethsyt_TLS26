#include <iostream>
using namespace std;

int main() {
    char pesan[1000];

    cin >> pesan;

    int i = 0;

    while (pesan[i] != '\0') {
        if (i == 0) {
            cout << pesan[i];
        } else {
            int nilaiSekarang = pesan[i] - 'A' + 1;
            int nilaiSebelumnya = pesan[i - 1] - 'A' + 1;

            int hasil = nilaiSekarang + nilaiSebelumnya;

            while (hasil > 26) {
                hasil = hasil - 26;
            }

            char hurufBaru = 'A' + hasil - 1;

            cout << hurufBaru;
        }

        i++;
    }

    return 0;
}