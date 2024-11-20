#include<iostream>
using namespace std;

class Cricketer {
public:
    // Member variables (attributes of the Cricketer)
    string name;    // To store the name of the cricketer
    int run;        // To store the total runs scored by the cricketer
    float average;  // To store the batting average of the cricketer

    // Constructor to initialize the cricketer's details (name, run, and average)
    Cricketer(string name, int run, float average) {
        // Use of 'this' keyword to differentiate between the local variable 'name' and the member variable 'name'
        this->name = name;        // 'this->name' refers to the class member, 'name' is the constructor argument
        this->run = run;          // Similarly, 'this->run' refers to the member variable, 'run' is the parameter
        this->average = average;  // 'this->average' refers to the member variable, 'average' is the parameter
    }

    // Function to display the cricketer's details
    void displayOutput(int run) {
        // 'this->run' refers to the object's member variable 'run' which holds the cricketer's total runs
        // Without 'this', the function might refer to the local parameter 'run', leading to confusion
        cout << name << " " << this->run << " " << average << endl;
    }
};

int main() {
    // Creating an object of the Cricketer class
    Cricketer c1("Virat Kohli", 25000, 50.65);

    // Calling the displayOutput function
    // The '6' here is not used inside the method, and it's an unused argument in this case.
    c1.displayOutput(6);
}
