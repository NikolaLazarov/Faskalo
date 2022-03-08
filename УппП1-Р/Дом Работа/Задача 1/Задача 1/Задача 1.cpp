/*
Задача, в която се въвежда число.Ако числото е
положително, програмата извежда 1. В противен случай
извежда 0;
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int output;
    cout << "Въведете число: ", cin >> n;
    if (n > 0) {
        output = 1;
    }
    else {
        output = 0;
    }
    cout << output;
}