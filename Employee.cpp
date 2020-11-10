#include <iostream>
#include "Employee.h"

using namespace std;

//this class encapsulates the onformation descriibing one employee
namespace Records{

  //constructor initialize data members
  Employee::Employee(const string& firstName, const string& lastName)
    : mFirstName(firstName), mLastName(lastName)
  {
  }

  //promote and demote call setSalary method
  void Employee::promote(int raiseAmount)
  {
    setSalary(getSalary() + raiseAmount);
  }

  void Employee::demote(int demeritAmount)
  {
    setSalary(getSalary() - demeritAmount);
  }

  //hire and fire methods set data member appropriately
  void Employee::hire()
  {
    mHired = true;
  }

  void Employee::fire()
  {
    mHired = false;
  }

  void Employee::display() const
  {
    cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
    cout << "---------------------------------------" << endl;
    cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
  cout << "EmployeeNumber: " << getEmployeeNumber() << endl;
  cout << "Salary: $" << getSalary() << endl;
  cout << endl;
  }

void Employee::setFirstName(const string& firstName)
{
  mFirstName = firstName;
}

const string& Employee::getFirstName() const
{
  return mFirstName;
}

void Employee::setLastName(const string& lastName)
{
  mLastName = lastName;
}

const string& Employee::getLastName() const
{
  return mLastName;
}

void Employee::setEmployeeNumber(int employeeNumber)
{
  mEmployeeNumber = employeeNumber;
}

int Employee::getEmployeeNumber() const
{
  return mEmployeeNumber;
}

void Employee::setSalary(int newSalary)
{
  mSalary = newSalary;
}

int Employee::getSalary() const
{
  return mSalary;
}

bool Employee::isHired() const
{
  if(mHired == true)
    return true;
  else
    return false;
}

}
