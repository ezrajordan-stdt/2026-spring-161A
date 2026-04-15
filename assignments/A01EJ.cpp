// ------------- FILE HEADER -------------
// Author ✅: Ezra Jordan
// Assignment ✅: Assignment 01 Weekly Payroll
// Date ✅: 04/12
// Citations: N/A


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: y
// B. OUTPUT ✅: y
// C. CALCULATIONS ✅: y
// D. LOGIC and ALGORITHMS ✅: y
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: y!
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  //declare variables
  int numID = 0;
  int hoursWorked = 0;
  int rateHourly = 0;
  int fedWithholdingRate = 0;
  int payGross = 0;
  int payWithheld = 0;
  int payNet = 0;

  //input
  cout << "Welcome to my Weekly Payroll program!!" << endl;
  cout << "Enter your employee ID number (numbers only): ";
  cin >> numID;
  cout << "Enter number of hours worked (whole numbers): ";
  cin >> hoursWorked;
  cout << "Enter the hourly rate: ";
  cin >> rateHourly;
  cout << "Enter the federal withholding rate: ";
  cin >> fedWithholdingRate;
  cout << endl;

  //calculations
  payGross = hoursWorked * rateHourly;
  
  payWithheld = payGross * fedWithholdingRate / 100;
  
  payNet = payGross - payWithheld;

  //output
  cout << "Your Payroll Summary:" << endl;
  cout << "Total Gross Pay: $" << payGross << endl;
  cout << "Federal Tax Withholding: $" << payWithheld << endl;
  cout << "Net Pay: $" << payNet << endl;
  cout << "Thank you for using my Weekly Payroll program!! " << endl;
  
  return 0;

}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/