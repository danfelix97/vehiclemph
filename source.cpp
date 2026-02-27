#include <iostream>
using namespace std;

double calcSpeed(double distancePar, double timePar);
int main() { 
    double dis = 0; 
    double time = 0; 
    
    cout << "Enter the distance traveled in miles:"; 
    cin >> dis; 

    cout << "Enter the time it took to travel this distance in hours: "; 
    cin >> time; 

    cout << "Your vehicle was traveling " << calcSpeed(dis, time) << " miles per hour";
    return 0;
}

double calcSpeed(double distancePar, double timePar) { 
    return distancePar / timePar; 
}
