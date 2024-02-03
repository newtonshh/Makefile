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
    int a = 1, b =2, c = 3;
    thread t1(print_all, a);
    thread t2(print_all, b);
    thread t3(print_all, c);
    add(1,2);

    return 0;
}