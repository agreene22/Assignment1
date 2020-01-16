/* Anna Greene
Employee Pay code
Calculates employees overall pay depending on number of hours worked and their net income
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double hourlyWage = 16.00; //Declaring and initliazing variables
  double overtimeWage = 0;
  double hoursWorked = 0;
  double grossPay = 0;
  double socialSecurity = 0;
  double federalIncomeTax = 0;
  double stateIncomeTax = 0;
  double medicalInsurance = 10;
  double netTakeHome = 0;

  overtimeWage = hourlyWage*1.5; //Calculating the wage for overtime hours

  cout << "Enter number of hours worked in a week: " << endl; //Prompting user for number of hours worked
  cin >> hoursWorked; //Getting input from the user

  if (hoursWorked <= 40){ //Checking for overtime hours
    grossPay = hoursWorked*hourlyWage; //Calculating regular hour wage
  }else{
    double overtime = hoursWorked - 40;
    grossPay = (40*hourlyWage) + (overtime*overtimeWage); //Calculating wage with overtime hours
  }
  netTakeHome = grossPay; //assigning take home with gross pay amount

  socialSecurity = grossPay*0.06; // Calcutaing social security
  netTakeHome -= socialSecurity; //Subtracting social security tax from take home

  federalIncomeTax = grossPay*0.14; // Calculating federal income tax
  netTakeHome -= federalIncomeTax; //Subtracting federal income tax from take home

  stateIncomeTax = grossPay*0.05; // Calculating state income tax
  netTakeHome -= stateIncomeTax; //Subtracting state income tax from take home

  netTakeHome -= medicalInsurance; //Subtracting $10 for medical insurance from take home

  // Displaying all final calculations to the user
  cout << "Worker's gross pay: $" << grossPay << endl;
  cout << "Social Security: $" << socialSecurity << endl;
  cout << "Federal Income Tax: $" << federalIncomeTax << endl;
  cout << "State Income Tax: $" << stateIncomeTax << endl;
  cout << "Net Take Home: $" << netTakeHome << endl;

  return 0;
}
