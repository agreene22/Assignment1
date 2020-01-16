/* Anna Greene
Cereal Problem Code
Converts the weight of a package of breakfast cereal and outputs the weight in tons and number of boxes needed for one ton.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double weight = 0; //declaring and initializing variables
  double weightTons = 0;
  int numBoxes = 0;

  cout << "Enter the weight of a package of breakfast cereal: " << endl; //Prompting the user to enter the weight
  cin >> weight; //Reading in users input for weight

  weightTons = weight/35273.92; //Converting the weight to tons
  numBoxes = 35273.92/weightTons; //Finding how many boxes yield one ton
  cout << "Weight in Tons: " << weightTons << endl; // Displaying the weight in tons to the user
  cout << "Number of boxes needed to yield one metric ton of cereal: " << numBoxes << endl; // Displaying number of boxes

  return 0;
}
