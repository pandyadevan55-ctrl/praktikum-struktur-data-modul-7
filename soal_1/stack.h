#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

const int MAX_ELEM = 20;

struct Stack {
    int info[MAX_ELEM + 1]; // Indeks 1 sampai 20
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
bool push(Stack &S, int x);
bool pop(Stack &S, int &x);
void printInfo(Stack S);
void balikStack(Stack &S);

#endif