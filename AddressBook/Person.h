#pragma once
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Person {
public:
    Person(string lastName, string name, string secondName = "not"):
        lastName(lastName), name(name),secondName(secondName)
    {
 
    }

    string GetName() const {
        return name;
    }
    string GetLastName() const {
        return lastName;
    }
    string GetSecondName() const {
        return secondName;
    }

    virtual string GetStatus() const = 0; //чистый виртуальный метод

    void SetAge(int age){
        this->age = age;
    }
    int GetAge() const{
        return age;
    }
    void SetPhone(string phone) {
        this->phone = phone;
    }
    string GetPhone() const{
        return phone;
    }
    void SetAddress(string address) {
        this->address = address;
    }
    string GetAddress() const {
        return address;
    }
    virtual string GetInfo() const
    {
        std::ostringstream fullInfo;
        fullInfo << GetLastName() << " " << GetName() << " " << GetSecondName() << "\n" << GetStatus() << " возраст: "
            << GetAge() << "\n телефон: " << GetPhone() << "\n адрес: " << GetAddress() << " ";
        return fullInfo.str();
    }
    virtual void Save() const
    {
        ofstream fout("person.txt", ios::app);
        fout << GetLastName() << " " << GetName() << " "<< GetSecondName() << "\n" << GetStatus() <<" возраст: "
            << GetAge() << "\n телефон: " << GetPhone() << "\n адрес: " << GetAddress() << " ";
        fout << endl;
        fout.close();
    }
    private:
        string name;
        string lastName;
        string secondName = "not";
        //string status = "not";
        int age = 0;
        string phone = "not";
        string address = "not";
        
        
    };