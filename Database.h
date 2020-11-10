#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

using namespace std;
//This class manages the employees : central repository of all employee records
namespace Records {
  const int kFirstEmployeeNumber = 1000;

  class Database {
  private:
    vector<Employee> mEmployees;
    int mNextEmployeeNumber = kFirstEmployeeNumber;
    
  public:
    //provides an employee with first and last name
    Employee& addEmployee(const string& firstName, const string& lastName);
    //provides an employee with employee  number
    Employee& getEmployee(int employeeNumber);
    Employee& getEmployee(const string& firstName, const string& lastName);
    //displays all employees
    void displayAll() const;
      //displays currently hired 
    void displayCurrent() const;
    //display employees no longer hired
    void displayFormer() const;
   
  };
}
