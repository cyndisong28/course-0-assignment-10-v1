#include <iostream>
#include <string>
using namespace std;

struct Driver {
    string first_name;
    string last_name;
    int age;
    string state;
};

Driver CreateDriver() {
    Driver a;
    cout << "Fist Name: ";
    cin >> a.first_name;
    cout << "Last Name: ";
    cin >> a.last_name;
    cout << "Age: ";
    cin >> a.age;
    cout << "State: ";
    cin >> a.state;
    return a;
}

int main() {
    Driver a = CreateDriver();
    cout << "First Name: " << a.first_name << endl;
    cout << "Last Name: " << a.last_name << endl;
    cout << "Age: " << a.age << endl;
    cout << "State: " << a.state << endl;

}
