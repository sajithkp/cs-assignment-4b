#include <iostream>
using namespace std;
 
int calculatePower(int, int);
 
int main()
{
    int base, powerRaised, result;
 
    cout << "\nEnter base value :: ";
    cin >> base;
 
    cout << "\nEnter power of base :: ";
    cin >> powerRaised;
 
    result = calculatePower(base, powerRaised);
 
    cout <<"\nThe Power of a Number [ "<< base << "^" << powerRaised << " ] = " << result<<"\n";
 
    return 0;
}
 
int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}
