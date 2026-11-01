#include "stack.h"

void createStack(Stack &S) {
    S.top = 0; // Top = 0 berarti kosong
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == MAX_ELEM; // Top = 20 berarti penuh
}

bool push(Stack &S, int x) {
    if (isFull(S)) {
        return false;
    }
    S.top++;
    S.info[S.top] = x;
    return true;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) {
        return false;
    }
    x = S.info[S.top];
    S.top--;
    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "TOP: ";
    for (int i = S.top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack temp1, temp2;
    createStack(temp1);
    createStack(temp2);
    int val;

    while (!isEmpty(S)) {
        pop(S, val);
        push(temp1, val);
    }
    while (!isEmpty(temp1)) {
        pop(temp1, val);
        push(temp2, val);
    }
    while (!isEmpty(temp2)) {
        pop(temp2, val);
        push(S, val);
    }
}