#include <iostream>
#include <cmath>

using namespace std;

//Variables
double Hyp;
double leg0;
double leg1;
int whichLeg;


//Functions
    double solveForHyp(double leg0, double leg1)
    {
        //Get values of the legs of the triangle
        cout << "Enter the length of the first leg: ";
        cin >> leg0;
        cout << "Enter the length of the second leg: ";
        cin >> leg1;

        //Actually Solves for it
        double Hyp = sqrt(pow(leg0, 2) + pow(leg1, 2));

        cout << "The hypotenuse of the given triangle is: " << Hyp << "\n";
    }

    double solveForTan(double leg0, double leg1)
    {
        //Gets values for legs
        cout << "Enter the length of the first leg: ";
        cin >> leg0;
        cout << "Enter the length of the second leg: ";
        cin >> leg1;
        //Solves for tan
        double tanTheta = leg1 / leg0;
        double cotTheta = leg0 / leg1;

        //Print the anwser
        cout << "Tangent ratio (tan(theta)): " << tanTheta << endl;
        cout << "Cotangent ratio (cot(theta)): " << cotTheta << endl;
    }

    double solveForSine(double leg0, double leg1)
    {
        //Get values of the legs of the triangle
        cout << "Enter the length of the first leg: ";
        cin >> leg0;
        cout << "Enter the length of the second leg: ";
        cin >> leg1;
        double Hyp = sqrt(pow(leg0, 2) + pow(leg1, 2));
        //leg1/Hyp
        double sine0 = leg1 / Hyp;
        //leg0/Hpy
        double sine1 = leg0 / Hyp;
        cout << "Sine of angle opposite the first leg: " << sine0 << endl;
        cout << "Sine of angle opposite the second leg: " << sine1 << endl;

    }

    double solveForCos(double leg0, double leg1)
    {
         //Get values of the legs of the triangle
        cout << "Enter the length of the first leg: ";
        cin >> leg0;
        cout << "Enter the length of the second leg: ";
        cin >> leg1;
        double Hyp = sqrt(pow(leg0, 2) + pow(leg1, 2));
        //Cos of leg0/Hyp
        double cos0 = leg0 / Hyp;
        //Cos of leg1/Hyp
        double cos1 = leg1 / Hyp;

        cout << "The Cos of the first leg is :" << cos0 << "\n ";
        cout << "The Cos of the Second leg is :" << cos1 << endl;


    }


//Main
int main()
{
    cout << "Hello world!" << endl;
    solveForCos(leg0, leg1);
    return 0;
}
