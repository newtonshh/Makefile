#include <iostream>
#include <thread>
#include "add.h"
using namespace std;

thread_local int all = 0;

void print_all(int x)
{
    all = x;
    for (int i = 0; i < 2; i++)
    {
        cout << x << "    " << all << endl;
    }
    return;
}

int main()
{
    int x = add(1,2);
    cout << x << endl;

    return 0;
}