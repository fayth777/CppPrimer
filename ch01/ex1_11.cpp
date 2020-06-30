// Print each number in the range specified by two integers.

#include <iostream>

int main()
{
    int a, b;
    cin >> a >> b;

    while (a > b) {
        cout << b;
        ++b;
    }
   
    while (b > a) {
        cout << a;
        ++a;
    }
    return 0;
}
