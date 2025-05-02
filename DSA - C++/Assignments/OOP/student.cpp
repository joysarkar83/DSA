#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    private:
    string studentID;

    public:
    Student(string name, int age, string studentID) : Person(name, age){
        this->studentID = studentID;
    }

    void displayStudentInfo(){
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nStudent ID: "<<studentID<<"\n";
    }
};

int main(){
    Student student("Alice",20,"S12345");
    student.displayStudentInfo();
    return 0;
}