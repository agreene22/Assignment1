/*
An employee is paid at a rate of $16.00 per hour for regular hours worked in a week.
Any hours over that are paid at the overtime rate of one and one-half times that.
From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is withheld
for federal income tax, 5% is withheld for state income tax, and $10 per week is withheld
for medical insurance. Write a program that will read in the number of hours worked in a
week as input and that will then output the worker’s gross pay, each withholding amount,
and the net take-home pay for the week.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double hourlyWage = 16.00;
  double overtimeWage = 0;
  double hoursWorked = 0;
  double grossPay = 0;
  double socialSecurity = 0;
  double federalIncomeTax = 0;
  double stateIncomeTax = 0;
  double medicalInsurance = 10;
  double netTakeHome = 0;

  overtimeWage = hourlyWage*1.5;

  cout << "Enter number of hours worked in a week: " << endl;
  cin >> hoursWorked;

  if (hoursWorked <= 40){
    grossPay = hoursWorked*hourlyWage;
  }else{
    double overtime = hoursWorked - 40;
    grossPay = (40*hourlyWage) + (overtime*overtimeWage);
  }
  netTakeHome = grossPay;

  socialSecurity = grossPay*0.06;
  netTakeHome -= socialSecurity;

  federalIncomeTax = grossPay*0.14;
  netTakeHome -= federalIncomeTax;

  stateIncomeTax = grossPay*0.05;
  netTakeHome -= stateIncomeTax;

  netTakeHome -= medicalInsurance;

  cout << "Worker's gross pay: $" << grossPay << endl;
  cout << "Social Security: $" << socialSecurity << endl;
  cout << "Federal Income Tax: $" << federalIncomeTax << endl;
  cout << "State Income Tax: $" << stateIncomeTax << endl;
  cout << "Net Take Home: $" << netTakeHome << endl;

  return 0;
}
