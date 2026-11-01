#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

typedef Node* address;

struct Stack {
    address Top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
address alokasi(int x);
void dealokasi(address &P);
bool push(Stack &S, int x);
bool pop(Stack &S, int &x);
void printInfo(Stack S);
void pushAscending(Stack &S, int x);
void clearStack(Stack &S);

#endif