#include <iostream>
#include <string>

using namespace std;

int main()

{
    cout << "Please enter your name: ";
    string name;
    getline(cin, name);
    cout << "Hello, " << name << "!" <<endl;
    cout << "Please enter your student ID: ";
    string id;
    getline(cin, id);
    cout << "Your student ID is " << id << "." <<endl;
    return 0;
}

