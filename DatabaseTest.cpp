#include <iostream>
#include "Database.h"

using namespace std;
using namespace Records;

int main()
{
  Database myDB;
  Employee& emp1 = myDB.addEmployee("Greg", "Wallis");
  emp1.fire();

  Employee& emp2 = myDB.addEmployee("Marcy", "White");
  emp2.setSalary(100000);

  Employee& emp3 = myDB.addEmployee("Luke", "Walker");
  emp1.setSalary(50000);
  emp3.promote();

  cout << "All Employees: " << endl;
  myDB.displayAll();

  cout << endl << "Current employees: " << endl;
  myDB.displayCurrent();

  cout << endl << "Former employees: " << endl;
  myDB.displayFormer();

  return 0;
}
