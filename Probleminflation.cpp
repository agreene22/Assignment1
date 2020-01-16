/* Anna Greene
  This is the Inflation Problem Program
  It takes in cost of an item, number of years, and inflation to calculate future price
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double cost = 0; //Declaring and initliaizng variables
  int numYears = 0;
  double inflationRate = 0;

  cout << "Enter the cost of the item: " << endl; //Prompting the user for cost of the item
  cin >> cost; // Getting input from the user for cost
  cout << "Enter the number of years from now the item will be purchased: " << endl; //Prompting the user for number of years
  cin >> numYears; //Getting input from the keyboard for years
  cout << "Enter the inflation rate (as a percentage): " << endl; // Prompting the user for inflation rate
  cin >> inflationRate; // Getting input from the keyboard for inflation rate

  inflationRate = inflationRate/100; // Converting the inflation rate ot a decimal

  for (int i = 0; i < numYears; i++){ //Updating the cost based on the inflation rate for the number of years enteres
    cost = cost + (cost*inflationRate);
  }

  cout << "Adjusted Price: $" << cost << endl; //Displaying the adjusted price to the user

  return 0;
}
