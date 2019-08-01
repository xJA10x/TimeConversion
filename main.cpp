/****************************************

Time converter

*****************************************/

#include <iostream>
#include <string>
using namespace std;

// Function prototype.
// Takes no parameters.
void display();
void stdToMlt();
void mltToStd();
// Function prototype.
// Takes three parameters.
void displayTime(int hour, int min, string amOrPm);
// Function protype.
// Takes two parameters.
void displayMltTime(int hour, int min);

char getSelection();
int getHour();
int getMin();
string getAmOrPm();

int main() {

  // Outputs empty line.
  cout << endl;
  // Outputs to the console.
  cout << "####################### Running Program ##################" << endl;
  // Outputs empty line.
  cout << endl;

  // Initializes variable.
  char choice = ' ';
  // Declares loop control variable.
  int control;

  // Outputs to the console.
  cout << "\t\tTime conversion Program" << endl;
  cout << endl;

  // Prompts user.
  cout << "Enter -1 to quit program: ";
  // Stores input in the variable control.
  cin >> control;
  // Outputs empty line.
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Function call.
    // Takes no parameters.
    display();

    cout << "What is your choice? ";
    // Function call.
    // Stores output in the variable choice.
    // Stores choice of the user.
    choice = getSelection();

    // Builds switch statement.
    switch(choice) {

      case 'a':
      case 'A':

          // Function call.
          stdToMlt();
          break;

      case 'b':
      case 'B':

          // Function call.
          mltToStd();
          break;

    }

    cout << "Press any key to run program or -1 to quit program: ";
    cin >> control;
    cout << endl;

  }

  // Outputs empty line.
  cout << endl;
  // Outputs to the console.
  cout << " ############################## Exitng Program #######################" << endl;
  // Outputs empty line.
  cout << endl;


  // Exits main function.
  // Returns 0 the operating system.
  return 0;


}

// Builds function.
void display() {

  // Prompts the user.
  cout << "What kind of conversion will you use? " << endl;
  cout << "A. 12-24 hour notation " << endl;
  cout << "or" << endl;
  cout << "B. 24-12 hour notation " << endl;

}

// Builds function.
// Determines which selection the user will input.
char getSelection() {

  // Declares variable.
  char choice;
  // Stores input in the variable choice.
  cin >> choice;

  // Returns the choice.
  return choice;

}

// Builds function.
void stdToMlt() {

  // Declares variables.
  int hour;
  int min;
  // Initializes variable.
  string amOrPm = " ";

  // Outputs to the console.
  cout << " Time(Hour): ";
  // Function call.
  // Stores output in the variable hour.
  hour = getHour();

  cout << "Time(Min): ";
  min = getMin();

  cout << "AM or PM? ";
  amOrPm = getAmOrPm();

  // Builds if statement.
  if(amOrPm == "PM" || amOrPm == "pm") {

    // Performs calculation.
    // Stores output in the variable hour.
    hour = hour + 12;

  }

  // Function call.
  // Takes two parameters.
  displayMltTime(hour, min);

}

// Builds function.
void mltToStd() {

  // Declares variables.
  int hour;
  int min;
  // Initializes variable.
  string amOrPm = " ";

  // Outputs to the console.
  cout << "Time(Hour)";
  // Function call.
  // Takes no parameters,
  // stores output in the variable hour.
  hour = getHour();

  cout << "Time(Min)";
  min = getMin();

  // Buils if statement.
  if(hour <= 12) {

    amOrPm = "AM";

  } else if(hour > 12) {

    amOrPm = "PM";
    // Performs calculation.
    // Stores output in the variable hour.
    hour = hour % 12;

  }

  // Function call.
  // Takes two parameters.
  displayTime(hour, min, amOrPm);


}

// Builds function.
int getHour() {

  // Declares variable.
  int hr;
  // Stores input in the variable hr.
  cin >> hr;
  // Return hr.
  return hr;

}

// Builds function.
int getMin() {

  // Declares variable.
  int mn;
  // Stores input in the variable mn.
  cin >> mn;
  // Returns min.
  return mn;

}

// Builds function.
string getAmOrPm() {

  // Declares variable.
  string ampm;
  // Stores input in the variable ampm;
  cin >> ampm;
  // Return either am || pm.
  return ampm;

}

// Builds function.
// Takes three parameters.
void displayTime(int hour, int min, string amOrPm) {

  // Initializes variable.
  char zero = ' ';

  // Builds if statement.
  if(min < 10) {

    zero = '0';

  }

  cout << endl << "Time: " << hour << ":" << zero << min << " " << amOrPm << endl;

}

// Builds function.
// Takes two parameters.
void displayMltTime(int hour, int min) {


  // Initializes variables.
  char zero = ' ';
  char hrzero = ' ';

  // Builds if statement.
  if(hour < 10) {

    hrzero = '0';

  }

  if(min < 10) {

    zero = '0';

  }


  // Outputs to the console.
  cout << endl << "Time: " << hrzero << hour << ":" << zero << min << endl;

}
