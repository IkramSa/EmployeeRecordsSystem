#pragma once
#include <string>
using namespace std;

namespace Records{
  const int kDefaultStartingSalary = 30000;

  class Employee{
  private:
    string mFirstName; //no name by default
    string mLastName;
    int mEmployeeNumber = -1;
    int mSalary = kDefaultStartingSalary;
    bool mHired = false;//status of not hired by default
    
    
  public:
    //constructor

    Employee() = default;
    Employee(const string& firstName, const string& lastName);

    void promote(int RaiseAmount = 1000);
    void demote(int demerit = 1000);
    void hire();
    void fire();
    void display() const;

    //getters and setters
    void setFirstName(const string& firstName);
    const string& getFirstName() const;

    void setLastName(const string& lastName);
    const string& getLastName() const;

    void setEmployeeNumber(int employeeNumber);
    int getEmployeeNumber() const;

    void setSalary(int newSalary);
    int getSalary() const;

    bool isHired() const;
  };
    
}
