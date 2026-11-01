#include "stack.h"

void createStack(Stack &S) {
    S.Top = nullptr;
}

bool isEmpty(Stack S) {
    return S.Top == nullptr;
}

address alokasi(int x) {
    address P = new Node;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

bool push(Stack &S, int x) {
    address P = alokasi(x);
    if (P == nullptr) return false;
    P->next = S.Top;
    S.Top = P;
    return true;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) return false;
    address P = S.Top;
    x = P->info;
    S.Top = P->next;
    dealokasi(P);
    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "TOP: ";
    address P = S.Top;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void pushAscending(Stack &S, int x) {
    Stack tempStack;
    createStack(tempStack);
    int val;

    // Pindahkan elemen yang lebih besar dari x ke stack bantu
    while (!isEmpty(S) && S.Top->info > x) {
        pop(S, val);
        push(tempStack, val);
    }

    // Masukkan elemen baru
    push(S, x);

    // Kembalikan elemen dari stack bantu ke stack utama
    while (!isEmpty(tempStack)) {
        pop(tempStack, val);
        push(S, val);
    }
}

void clearStack(Stack &S) {
    int x;
    while (!isEmpty(S)) {
        pop(S, x);
    }
}