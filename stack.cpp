#include "stack.h"

void createStack_1301213036(stack &S){
    S.Top = 0;
}

bool isEmpty_1301213036(stack S){
    if (S.Top == 0){
        return true;
    } else {
        return false;
    }
}

bool isFull_1301213036(stack S){
    if (S.Top == 15){
        return true;
    } else {
        return false;
    }
}

void push_1301213036(stack &S, infotype x){
    if (isFull_1301213036(S) == false){
        S.Top++;
        S.info[S.Top] = x;
    }
}

infotype pop_1301213036(stack &S){
    infotype x;

    x =  S.info[S.Top];
    S.Top--;
    return x;
}

void printInfo_1301213036(stack S){
    for (int i = S.Top; i >= 1; i--){
        cout << S.info[i];
    }
}
