#include <iostream>
#include <string>
#include <time.h>

using namespace std;


void kwait() {
    char a;
    cout << "\n\nPress Enter to continue.....";
    a = getchar();
}

void congrats(string name, int grade, int age, int time) {
    cout << "\n\n###### CONGRATULATIONS ON COMPLETING THIS UNIT ######\n\n" << endl
         << "\t Name: " << name << endl
         << "\t Grade: " << grade << endl
         << "\t Age: " << age << endl
         << "\t Time Spend: " << time << endl;
}

void space() {
    int i;
    //Make space for start of program
    for (i = 0; i < 40; i++) {
        cout << "\n";
    }
}

void quadratic() {
    cout << "QUADRATIC EQUATIONS" << endl; 
    cout << "As we already know a quadratic equations take the following form \n\n" << endl
         << "\tax^2 + bx + c = 0\n\n" << endl;
    kwait();
    cout << "\nThis kind of eqaution generally has two roots\n" << endl
         << "some expressions can be easily factored to find these roots using the follwoing form \n\n" << endl
         << "\ta(x-x_1)(x-x_2) = 0\n" << endl;
    kwait();
    cout << "However more often then not, something called the quadriatic formula is used to find these roots.\n" << endl
         << "The formula looks something like this\n\n" << endl
         << "\t    -b +/- sqrt(b^2 - 4ac)" << endl
         << "\tx = ----------------------" << endl
         << "\t             2a" << endl;
    kwait();
    cout << "the section within the sqrt();\n\n" << endl
         << "b^2 - 4ac\n\n" << endl
         << "is what is known as the discriminant\n\n" << endl
         << "the discriminant gives us an idea what kind of roots our expression has \n\n" << endl
         << "discriminant = +: means the roots will be real and unequal\n" << endl
         << "discriminant = 0 : means the two roots will be real and equal to each other" << endl
         << "discriminant = -: means the roots will be complex, and each root is the complex conjugate of the other root\n\n\n" << endl;
    kwait();
    cout << "Lets take a look at an example\n\n" << endl
         << "So we want to solve the following equation:\n\n" << endl 
         << "\t2x^2 + 3x - 4 = 0\n\n" << endl
         << "\tThe coefficients of the equations are:\n\n" << endl
         << "\ta = 2, b = 3, c = -4\n\n" << endl;
    kwait();
    cout << "\tusing our equation we can get the following\n\n" << endl
         << "\t    -3 +/- sqrt(3^2 - 4(2)(-4))" << endl
         << "\tx = ----------------------------" << endl
         << "\t               2(2)" << endl
         << "=" << endl
         << "\t    -3 +/- sqrt(9 + 32)" << endl
         << "\tx = --------------------" << endl
         << "\t              4" << endl
         << "\t=" << endl
         << "\t    -3 +/- sqrt(41)" << endl
         << "\tx = ---------------" << endl
         << "\t           4" << endl;
    kwait();
    cout << "\nthis means our solutions are:\n\n" << endl
         << "\t      -3 + sqrt(41)      -3 - sqrt(41)" << endl
         << "\tx_1 = -------------  and -------------" << endl
         << "\t            4                  4" << endl;
    kwait();
    cout << "\tThe coefficients of the equations are:\n\n" << endl
         << "\ta = 1, b = 5, c = -3\n\n" << endl;
    kwait();
    cout << "\tusing our equation we can get the following\n\n" << endl
         << "\t    -5 +/- sqrt(5^2 - 4(1)(-3))" << endl
         << "\tx = ----------------------------" << endl
         << "\t               2(1)" << endl
         << "=" << endl
         << "\t    -5 +/- sqrt(25 + 12)" << endl
         << "\tx = --------------------" << endl
         << "\t              2" << endl
         << "\t=" << endl
         << "\t    -5 +/- sqrt(37)" << endl
         << "\tx = ---------------" << endl
         << "\t           2" << endl;
    kwait();
    cout << "\nthis means our solutions are:\n\n" << endl
         << "\t      -5 + sqrt(37)      -5 - sqrt(37)" << endl
         << "\tx_1 = -------------  and -------------" << endl
         << "\t            2                  2" << endl;
    kwait();
    cout << "\n------now its your turn!------\n"
         << "\nTry to solve this one on your own;\n" << endl
         << "When your finsihed, press enter to see the answer\n" << endl
         << "We now want to solve the following equation:\n\n" << endl 
         << "\tx^2 + 5x - 3 = 0\n\n" << endl;
    kwait();
    cout << "You are now half way through this unit..." << endl;
    kwait();
}

void substituition() {
    cout << "SIMOLTANEOUS EQUATIONS" << endl
         << "simoltaneous equations or systems of eqatuions is when you have" << endl
         << "two different equations with the same two unknowns in each, you" 
         << "can solve for both unknowns.\n" << endl
         << "There are three common methods for solving:" << endl
         << "addition/subtraction, substitution, and graphing" << endl;
    kwait();
    cout << "\n\n---GRAPHING---" << endl
         << "Graphing can be done simply by graphing all of the equations of the system and finding their intercepts" << endl;
    kwait();
    cout << "\n\n----ADDITION/SUBTRACTION----" << endl
         << "given two equations the following steps may be able to find a solution to the system\n" << endl
         << "1.) Multiply one or both equations by some number(s) to make the number in front of one of the " << endl
         << "letters (unknowns) the same or exactly the opposite in each equation.\n" << endl
         << "2.) Add or subtract the two equations to eliminate one letter.\n" << endl
         << "3.) Solve for the remaining unknown.\n" << endl
         << "4.) Solve for the other unknown by inserting the value of the unknown found in one of the original equations.\n" << endl;
    kwait();
    cout << "\nHere is an example..." << endl
         << "We want to solve for x and y\n" << endl
         << "\tx + y = 7" << endl
         << "\tx - y = 3" << endl;
    kwait();
    cout << "\nAdding the equations eliminates the y-terms. producing the follwing" << endl
         << "\t2x = 10" << endl
         << "\t=" << endl
         << "\tx = 5" << endl;
    kwait();
    cout << "\nNow inserting 5 for x in the first equation gives the following" << endl
         << "\t 5 + y = 7" << endl
         << "\t-5      -5" << endl
         << "\t     y = 2" << endl
         << "\nWhich means our answers are x = 5 and y = 2" << endl;
    kwait();
    cout << "\n\n-----SUBSTITUTION-----" << endl
         << "this method inolves substituting one equation into another" << endl
         << "Lets get right into an example...." << endl;
    kwait();
    cout << "We want to Solve for x and y" << endl
         << "\tx - y = 8" << endl
         << "\tx + 3y = 48" << endl;
    kwait();
    cout << "\nfirst off, we can move our first equation around so that we solve for x" << endl
         << "\tx = y + 8" << endl
         << "\tx + 3y = 48" << endl;
    kwait();
    cout << "\nnow we can use this equation for x to substitute into our other equation" << endl
         << "\t(y + 8) + 3y = 48" << endl;
    kwait();
    cout << "\nand now we just have to solve for y" << endl
         << "\t4y + 8 = 48" << endl
         << "\t    -8   -8" << endl
         << "\t-----------" << endl
         << "\t4y     = 40" << endl
         << "\t4y/4 = 40/4" << endl
         << "\ty = 10" << endl;
    kwait();
    cout << "now with our y value we can plug this into our simple equation" << endl
         << "\tx = (10) + 8" << endl
         << "\tx = 18" << endl;
    kwait();
    cout << "and we now have the solutions to our system" << endl
         << "\tx = 18 & y = 10" << endl; 
    kwait();
    cout << "\n------now its your turn!------\n" << endl
         << "solve for x and y using substitution\n" << endl
         << "\t5x - 6y = 14" << endl
         << "\ty - 4x = -17" << endl;
    kwait();
    cout << "answer: x = 4, y = -1" << endl;
    kwait();
}

int main()
{
    time_t start = time(0);

    
    string name, ip;
    int  age, grade, ssn; 
    cout << "please enter your name: ";
    getline(cin, name);
    cout << "please enter your age:  ";
    cin >> age; 
    cout << "please enter your grade: ";
    cin >> grade;
    cout << "please enter your SSN: ";
    cin >> ssn;
    cout << "please enter your IP address: ";
    cin >> ip;

    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "Grade: " << grade << endl
         << "SSN: " << ssn << endl
         << "IP address: " << ip << endl;
    space();    
    cout << "#######--Lets Get Started!--#######\n\n";
    quadratic();
    space();
    substituition();
    double seconds_since_start = difftime( time(0), start);
    congrats(name, grade, age, seconds_since_start);

}