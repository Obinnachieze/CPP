#include <iostream>
using namespace std;
#include <string>
//this is a simple c++ program that adds two numbers and prints the result along with the numbers and a message.

/*
this is the new easy way to write a c++ program, you can just write the code and it will work without the need for a main function, but for now we will stick to the traditional way of writing a c++ program with a main function.
*/
int add (int a, int b) {
        int sum = a * b;
    return sum;
}
int main() {
    // int age;
    // string name;
    // cout << "The sum is : " << add(300,603) << endl;
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "Hello, " << name << "!" << endl;
    // cout << "You are " << age << " years old." << endl;

    // cerr << "This is an error message" << endl;
    // clog << "This is a log message" << endl;
    string name;
    int age;
    cout << "Enter your name and age: ";
   getline(cin, name);
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    
   
    return 0;
}