// ------------- FILE HEADER -------------
// Authors ✅: Allison, Ezra
// Assignment ✅: Discussion 02: Driving Costs
// Date ✅: 04/13 due 04/19
// Citations: 

// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main(int argc, char* argv[]) {
  double milesPerGallon = 0.0;
  double pricePerGallon = 0.00;
  float costPerMile = 0.00;
  float costXMiles = 0.00;

  ///inputs
  cout << "WELCOME TO MY GAS COST CALCULATOR!!!!!!!!!!!!! " << endl; 
  cout << "What is the miles per gallon of your car?: ";
  cin >> milesPerGallon;
  cout << "What is the current cost of gas?: $";
  cin >> pricePerGallon;

  ///sets the costPerMile according to the milesPerGallon & pricePerGallon
  costPerMile = pricePerGallon / milesPerGallon;

  ///sets the max output accuracy to the hundredths place
  cout << fixed << setprecision(2);

  ///outputs
  costXMiles = costPerMile * 20;
  cout << "Your gas cost at 20 miles is $" << costXMiles << endl;
  costXMiles = costPerMile * 75;
  cout << "Your gas cost at 75 miles is $" << costXMiles << endl;
  costXMiles = costPerMile * 500;
  cout << "Your gas cost at 500 miles is $" << costXMiles << endl;

  return 0;
}
/* 
DECLARE double milesPerGallon = 0.0
DECLARE double pricePerGallon = 0.00
DECLARE float costPerMile = 0.00
DECLARE float costXMiles = 0.00

// inputs
DISPLAY "WELCOME TO MY GAS COST CALCULATOR!!!!!!!!!!!!! "
DISPLAY "What is the miles per gallon of your car?: "
INPUT milesPerGallon
DISPLAY "What is the current cost of gas?: $"
INPUT pricePerGallon

// sets the costPerMile according to the milesPerGallon & pricePerGallon
costPerMile = pricePerGallon / milesPerGallon

// sets the max output accuracy to the hundredths place
DISPLAY setPrecision (2)

// outputs
costXMiles = costPerMile * 20
DISPLAY "Your gas cost at 20 miles is $"  costXMiles
costXMiles = costPerMile * 75
DISPLAY "Your gas cost at 75 miles is $" costXMiles
costXMiles = costPerMile * 500
DISPLAY "Your gas cost at 500 miles is $" costXMiles */


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
