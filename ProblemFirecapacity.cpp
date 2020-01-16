/* Anna Greene
Fire Capacity problem
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int maxCapacity = 0; //Declaring and initializing variables
  int numPeople = 0;
  int morePeople = 0;

  cout << "Enter the maximum capacity of the room: " << endl; //Prompting the user to enter room capacity
  cin >> maxCapacity; //Reading user input for capacity
  cout << "Enter the number of people attending the meeting: " << endl; //Prompting the user for number of people in attendence
  cin >> numPeople; //Getting user input for number of people attending

  if (numPeople <= maxCapacity){ //Checking if the number of people attending is greater than or equal to the capacity
    cout << "It is legal to hold the meeting." << endl; //Telling the user they are under capacity
    morePeople = maxCapacity - numPeople; //Calculating how many extra people could attend
    cout << morePeople << " more people may legally attend." << endl; //Displaying to the user how many more more people
  } else{ //Runs if the number of people is greater than capacity
    cout << "The meeting cannot be held as planned due to fire regulations. " << endl; //Tells the user there are too many people
    morePeople = numPeople - maxCapacity; //Calculating how many more people there are than the capacity
    cout << morePeople << " people must be excluded in order to meet fire regulations." << endl;
  }

  return 0;
}
