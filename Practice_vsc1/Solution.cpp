#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include "Print.h" // includes a header which contains a method "print", created by myself
#include <vector>
#include <unordered_map>
#include <map>

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

 static void bubbleSort(int ar[], int n){
     
     for(int i=0; i<n; i++){
         for(int j=1; j<n-i; j++){
             if(ar[j-1]>ar[j]){
                 int temp=ar[j];
                 ar[j]=ar[j-1];
                 ar[j-1]=temp;
             }
         }
     }

}

static void bubbleSort2(int (&ar)[6], int n){
    
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(ar[j-1]>ar[j]){
                int temp=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=temp;
            }
        }
    }

}

static bool binarySearch(int ar[],int n, int key){
    
    int up=n-1;
    int down=0;
    for(int i=0; i<n; i++){
        int middle=(up+down)/2;
        cout<<"middle "<<middle<<endl;
        cout<<"up "<<up<<endl;
        cout<<"down "<<down<<endl;
        if(middle==down && middle<up){
            middle+=1;
        }
        else if(middle==up && middle>down){
            middle+=1;
        }
        if(ar[middle]<key){
            down=middle;
        }
        else if(ar[middle]>key){
            up=middle;
        }
        else{
            return true;
        }
    }
    return false;
}

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
    //unordered map  
    unordered_map<string, int> umap;
    umap["Maciek123"]=20;
    umap["Bartek123"]=20;
    umap["Pablo"]=20;
    umap["Magic"]=29;
    umap.find("Maciek123");
    for(auto t: umap){
        cout<<"Key: "<<t.first<<" Value: "<<t.second<<endl;
    }
    cout<<"----------------------"<<endl;
    //ordered map (when string then alphabetical order)
    map<string, int> map;
    map["Maciek123"]=20;
    map["Bartek123"]=20;
    map["Pablo"]=20;
    map["Magic"]=29;
    for(auto t: map){
        cout<<"Key: "<<t.first<<" Value: "<<t.second<<endl;
    }
    
    //vectors
    vector<string> v;
    v.push_back("Maciek"); //adding
    v.push_back("Bartek");
    while(!v.empty()){ //checks if empty
        cout<<v.back()<<endl; //returns the last added element
        v.pop_back(); //removes the last element (void)

    }
    
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
    char* c3 = new char[10];
    
    
    char c4[10] ="";
    char ch = (char) 87;
    c4[0]=ch;
    cout<<c4[0];
    cout<<strlen(c3)<<endl;
    c4[1]=(char) 2;
    cout<<strlen(c4)<<endl;
    cout<<c4[0]<<endl;
    cout<<c4[1]<<endl;
    strcpy(c4, "maciek"); //for copying a cstring to a cstring, another way is a loop which is tedious to do so
    
    for(int i=0; i<strlen(c3); i++)
    {
        c3[i]='a'+i;
        cout<<c3[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<strlen(c4); i++){
        c4[i]='a'+i;
        cout<<c4[i]<<" ";
    }
    cout<<endl;
    cout<<strlen(c3);
    cout<<strlen(c4);
    cout<<endl;
    cout<<'a'<<endl;


    print(c2);
    
    auto maciek = [&](int x){
        cout<<"Maciek is the best"<<endl;
    };
    maciek(10);
    cout<<::a<<endl;
    cout<<banana(100)<<endl;
    //binary sort
    int arr[]={7, 2, 4, 6, 9, 1, 8};
    int arr2[]={1, 8, 72, 5, 2, 4};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<i<<" "<<arr[i]<<endl;
    }
    bubbleSort2(arr2, n2);
    for(int i=0; i<n2; i++){
        cout<<i<<" "<<arr2[i]<<endl;
    }

    int arr3[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr3)/sizeof(arr3[0]);
    cout<<binarySearch(arr3,len,  11)<<endl;
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