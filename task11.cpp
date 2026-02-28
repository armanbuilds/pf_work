#include <iostream>
using namespace std;
main()
{
int currentpopulation , birthrate;
cout<<" enter the current world population : ";
cin>>currentpopulation;
cout<<" enter the monthly birth rate : ";
cin>>birthrate;
int totalpopulation = (3*12)*(30)+ currentpopulation ;
cout<<" population in three decades will be "<<totalpopulation;
}