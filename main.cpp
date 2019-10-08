#include <iostream>

using namespace std;

double residental(double service,double pre)
{
    return 4.5+20.5*service+7.5*pre;
}
double business(double service,double pre)
{
    if(service<=10)
        return 15+75+50*pre;
    else
        return 15+75+5*(service-10)+50*pre;
}
int main()
{
    char code;
    int service,premium;
    cout<<"Enter customer code: ";
    cin >> code;
    cout << "Enter number of service connections: ";
    cin >> service;
    cout << "Enter number of premium channals: ";
    cin >> premium;
    cout << "Total billing account is $ ";
    if(code == 'r'||code == 'R')
        cout << residental(service,premium);
    if(code =='b'||code =='B')
        cout <<business(service,premium);
    return 0;
}
