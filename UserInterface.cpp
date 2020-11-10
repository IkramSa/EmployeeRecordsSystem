#include <iostream>
#include <stdexcept>
#include <exception>
#include "Database.h"

using namespace std;
using namespace Records;

//this class is a menu-based UI to make it easy for user to work with employee database

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);
  

int main()
{
  Database employeeDB;
  bool done = false;

  //loop that displays the menu, performs the selected action and does it all again
  while(!done)
    {
      int selection = displayMenu();
      switch (selection)
	{
	case 0:
	  done = true;
	  break;
	case 1:
	  doHire(employeeDB);
	  break;
	case 2:
	  doFire(employeeDB);
	  break;
	case 3:
	  doPromote(employeeDB);
	  break;
        case 4:
	  employeeDB.displayAll();
	  break;
	case 5:
	  employeeDB.displayCurrent();
	  break;
	case 6:
	  employeeDB.displayFormer();
	  break;
	default:
	  cerr<<"Unknown command." << endl;
	  break;
	}
    }

  return 0;
}

//function that outputs the menu and gets the input from user
int displayMenu()
{
  int selection;
  cout << endl;
  cout << "Employee Database" << endl;
  cout << "-----------------" << endl;
  cout << "1) Hire a new employee" << endl;
  cout << "2) Fire an employee" << endl;
  cout << "3) Promote an employee" << endl;
  cout << "4) List all employees" << endl;
  cout << "5) List all current employees" << endl;
  cout << "6) List all former employees" << endl;
  cout << "0) Quit" << endl;
  cout << endl;
  cout << "--->" << endl;
  cin >> selection;
  return selection;
}

void doHire(Database& db)
{
  string firstName;
  string lastName;

  cout << "First name? ";
  cin >> firstName;

  cout << "Last name? ";
  cin >> lastName;

  db.addEmployee(firstName, lastName);
  
}

void doFire(Database& db)
{
  int employeeNumber;

  cout << "Employee Number? ";
  cin >> employeeNumber;

  try{
    Employee& emp = db.getEmployee(employeeNumber);
    emp.fire();
    cout << "Employee " << employeeNumber << " terminated." << endl;
  }
  catch (const std::logic_error& exception)
    {
      cerr << "Unable to terminate employee: " << exception.what() << endl;
    }
}

void doPromote(Database& db)
{
  int employeeNumber;
  int raiseAmount;


  cout << "Employee Number? ";
  cin >> employeeNumber;

  cout << "How much of a raise? ";
  cin >> raiseAmount;
  
  try{
    Employee& emp = db.getEmployee(employeeNumber);
    emp.promote(raiseAmount);
    cout << "Employee " << employeeNumber << " terminated." << endl;
  }
  catch (const std::logic_error& exception)
    {
      cerr << "Unable to terminate employee: " << exception.what() << endl;
    }
}
