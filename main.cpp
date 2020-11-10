#include <iostream>
#include "Employee.h"

using namespace std;

using namespace Records;
	int main()
	{
	  cout << "Testing the Employee Class !" << endl;
	  Employee emp;
	  emp.setFirstName("Jane");
	  emp.setLastName("Doe");
	  emp.setEmployeeNumber(71);
	  emp.setSalary(50000);
	  emp.promote();
	  emp.promote(50);
	  emp.hire();
	  emp.display();

	  return 0;
	}
