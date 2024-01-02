#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int age;
    string name;

public:
    student(int a, string n)
    {
        age = a;
        name = n;
    }
    void display()
    {
        cout << age;
        cout << name;
    }
};

int main()
{
    int x =13;
    string s;
    // ofstream out("check.txt");
    // out << "hello world";
    // // cout<<x;
    ifstream in("check.txt");
    in>>s;
    cout<<s;
}