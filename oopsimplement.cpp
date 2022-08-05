#include<bits/stdc++.h>
using namespace std;

// Creation of class and constructor

class Person{
    string name;
    int id;
    
    public:
        
        Person(){
        name = "SPY";
        id = 7;
    }
        void printDetails(){
            cout << id << " " << name << endl;
        }
};

// Encapsulation

class Box{
    public:
        double getVolume(){
            return length*breadth*height;
        }
    
    private:    // Here these 3 variables are encapsulated
        double length = 5.38;
        double breadth = 6.65;
        double height = 6.65;
};

// Abstraction

class SetVariable {
    private:
        int a,b;
        
    public:
    
        void set(int x,int y){
            a = x;
            b = y;
        }
        
        void display(){
            cout << a << " " << b << endl;
        }
};

// Inheritance
class Animal{
    public:
        string name;
        int id;
        
        void display(string name, int id){
            cout << name << " " << id;
        }
};

class Dog: public Animal{
    
};

// Polymorphism
/*
Polymorphism has two types:
1. Compile time:
    i) Function Overloading
    ii) Operator Overloading
2. Run Time:
    i) Virtual Functions
*/

class Polym {
    public:
        void func(int x){
            cout << "X = " << x << endl;
        }
        
        void func(int x, int y){
            cout << "X + Y = " << x+y << endl;
        }
};

int main(){
    double volume;
    Person p;
    p.printDetails();
    
    Box b1;
    volume = b1.getVolume();
    cout << volume;
    cout << "\n";
    
    SetVariable set1;
    set1.set(7,77);
    set1.display();
    
    Dog d1;
    d1.display("Tommy",7);
    cout<<"\n";
    
    Polym pm;
    pm.func(10);
    pm.func(10,20);
    
    return 0;
}