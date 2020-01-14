/*
A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input)
of a package of breakfast cereal in ounces and output the weight in metric tons as well as
the number of boxes needed to yield one metric ton of cereal.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double weight;
  double weightTons;
  int numBoxes;

  cout << "Enter the weight of a package of breakfast cereal: " << endl;
  cin >> weight;

  weightTons = weight/35273.92;
  numBoxes = 35273.92/weightTons; //CHECK IF THIS IS CORRECT
  cout << "Weight in Tons: " << weightTons << endl;
  cout << "Number of boxes needed to yield one metric ton of cereal: " << numBoxes << endl;

  return 0;
}
