#include "stack.h"

int main() {
    Stack S;
    createStack(S);
    int pilihan, x;

    do {
        cout << "\n--- MENU STACK ARRAY (SOAL 1) ---\n";
        cout << "1. Push\n2. Pop\n3. Tampilkan (PrintInfo)\n4. Balik Stack\n5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai (integer): ";
                cin >> x;
                if (push(S, x)) {
                    cout << "Berhasil push " << x << endl;
                } else {
                    cout << "Gagal! Stack penuh (maksimal 20 elemen).\n";
                }
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
                balikStack(S);
                cout << "Stack berhasil dibalik!\n";
                printInfo(S);
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}