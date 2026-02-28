#include <iostream>
using namespace std;
main()
{
int sides;
cout<<" enter the sides of polygon : " ;
cin>> sides;
int angles = ( sides - 2 )* 180;
cout<<" the total sum of internal angles of a "<<sides<<" polygon is : "<<angles<< " degrees ";
}