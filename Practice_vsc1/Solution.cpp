#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include "Print.h"

using namespace std;

class Person
{
    string _name;
    string _surname;
    int _age;

  public:
    Person(string name, string surname, int age)
    {
        _name = name;
        _surname = surname;
        _age = age;
    }
    string displayName();
    string displaySurname();
    int displayAge();

    int squareRootAge();
    Person(const Person&);
    ~Person() {}
};

int a=100; //global variable
static string banana(int k){
    return "banana";
}
extern int test(20); // we can't use it. We can access it, forward it.

#ifndef lala
#define lala 10

int x = lala;
#endif
int main()
{   
    extern int test;
    cout<<"test: "<<test<<" x: "<<x<<endl;
    int *pi = new int;
    *pi = 10;

    delete pi; // it still exists, but the memory it pointed to, has been unleashed
    pi = nullptr;

    const char *c = new char[10];
    delete[] c;
    c = new char[10];
    c = "sadjas";
    string a = "Maciek";
    cout << a.length() << endl;
    cout << strlen(c) << endl;
    Person personA("Maciej", "Adamczyk", 20);
    Person personB("Pawel", "Adamczyk", 20);
    Person personC = personB;
    cout<<"Age: "<<personC.displayAge()<<endl;
    
    Person *pointer = new Person("Maciej", "Adamczyk", 20); //only pointers with new keyword
    delete pointer;

    //deck of cards
    string ar[] = {
        "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "Kh", "Ah",
        "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ad",
        "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ac",
        "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "As"};
    //shuffling the deck of cards
    int length = sizeof(ar) / sizeof(ar[0]);
    cout << length << endl;
    for (int i = 0; i < length; i++)
    {
        string temp = ar[i];
        int r = rand() % 10 + 41;
        ar[i] = ar[r];
        ar[r] = temp;
    }
    // for (int i = 0; i < length; i++)
    // {
    //     cout << ar[i] << endl;
    // }
    const char* c2 = "Maciek";
    print(c2);
    
    auto maciek = [&](int x){
        cout<<"Maciek is the best"<<endl;
    };
    maciek(10);
    cout<<::a<<endl;
    cout<<banana(100)<<endl;
}


Person::Person(const Person& x){
    _age=x._age;
    _name=x._name;
    _surname=x._surname;
}
string Person::displayName()
{
    cout << _name << endl;
}
string Person::displaySurname()
{
    cout << _surname << endl;
}
int Person::displayAge()
{
    cout << _age << endl;
}
int Person::squareRootAge()
{
    cout << sqrt(_age) << endl;
}