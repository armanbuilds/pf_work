#include <iostream>
using namespace std ;
main()
{
int minutes , seconds;
cout<<" number of minutes : ";
cin>>minutes;
cout<<" frames per second : ";
cin>>seconds;
int totalframes = minutes * seconds * 60 ;
cout<<" total number of frames : "<<totalframes;
}