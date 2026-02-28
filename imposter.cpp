#include <iostream>
using namespace std ;
main()
{
int ip, pc;
cout<<" enter imposter count : ";
cin>>ip;
cout<< " enter player count : ";
cin>>pc;
int chance = 100 * ip/pc;
cout<<" chance of being an imposter : "<<chance<< " %" ;
}