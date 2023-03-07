#include <iostream>

using namespace std;

int main()

{
    int var1;
    cout << "Please enter the value of var1: ";
    cin >> var1;

    int var2;
    cout << "Please enter the value of var2: ";
    cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;

    return 0;
}
