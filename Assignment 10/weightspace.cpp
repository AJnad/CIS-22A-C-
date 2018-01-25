/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 AM
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double weight;
    const double MERCURY_MULT = 0.38;
    const double VENUS_MULT = 0.91;
    const double MARS_MULT = 0.38;
    const double JUPITER_MULT = 2.54;
    const double SATURN_MULT = 1.08;
    const double URANUS_MULT = 0.91;
    const double NEPTUNE_MULT = 1.19;
    const double PLUTO_MULT = 0.06;
    string planet;


    cout << fixed << setprecision(1);

    cout << "Welcome! This program can calculate how much you weigh on any of the planets in our solar system!" << endl;
    cout << "First, please enter your weight in pounds: ";
    cin >> weight;
    cout << "Next, select from one of the following planets:" << endl;
    cout << "          Mercury" << endl;
    cout << "          Venus" << endl;
    cout << "          Mars" << endl;
    cout << "          Jupiter" << endl;
    cout << "          Saturn" << endl;
    cout << "          Uranus" << endl;
    cout << "          Neptune" << endl;
    cout << "          Pluto" << endl;

    cout << "Please enter the name of a planet: ";
    cin >> planet;

    if(planet == "Mercury")
        weight *= MERCURY_MULT;

    else if (planet == "Venus")
        weight *= VENUS_MULT;

    else if (planet == "Mars")
        weight *= MARS_MULT;

    else if (planet == "Jupiter")
        weight *= JUPITER_MULT;

    else if (planet == "Saturn")
        weight *= SATURN_MULT;

    else if (planet == "Uranus")
        weight *= URANUS_MULT;

    else if (planet == "Neptune")
        weight *= NEPTUNE_MULT;

    else if (planet == "Pluto")
        weight *= PLUTO_MULT;

    else
    {
        cout << "You entered an invalid name for a planet. Please re-run the program to try again. Please re-run the program to try again." << endl;
        return 1;
    }

    cout << "You weigh " << weight << " pounds on " << planet << "\n";


}
