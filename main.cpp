#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack S;
    createStack_1301213036(S);
    infotype x;

    x = 'I';
    push_1301213036(S, x);
    x = 'R';
    push_1301213036(S, x);
    x = 'I';
    push_1301213036(S, x);
    x = 'D';
    push_1301213036(S, x);
    x = 'A';
    push_1301213036(S, x);
    x = 'Y';
    push_1301213036(S, x);
    x = 'A';
    push_1301213036(S, x);
    x = 'C';
    push_1301213036(S, x);
    x = 'R';
    push_1301213036(S, x);
    x = 'E';
    push_1301213036(S, x);
    x = 'P';
    push_1301213036(S, x);
    printInfo_1301213036(S);
    cout << endl;

    pop_1301213036(S);
    pop_1301213036(S);
    pop_1301213036(S);
    pop_1301213036(S);
    pop_1301213036(S);
    pop_1301213036(S);
    pop_1301213036(S);
    printInfo_1301213036(S);

    return 0;
}
