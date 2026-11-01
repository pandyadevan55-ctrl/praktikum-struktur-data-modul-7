#include "stack.h"

int main() {
    Stack S;
    createStack(S);
    int pilihan, x;

    do {
        cout << "\n--- MENU STACK POINTER ASCENDING (SOAL 2) ---\n";
        cout << "1. Tambah Terurut (pushAscending)\n2. Pop\n3. Tampilkan (PrintInfo)\n4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai (integer): ";
                cin >> x;
                pushAscending(S, x);
                cout << "Nilai " << x << " berhasil dimasukkan secara terurut.\n";
                break;
            case 2:
                if (pop(S, x)) {
                    cout << "Nilai yang berhasil di-Pop: " << x << endl;
                } else {
                    cout << "Gagal! Stack kosong.\n";
                }
                break;
            case 3:
                printInfo(S);
                break;
            case 4:
                clearStack(S);
                cout << "Program selesai, memory dibersihkan.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}