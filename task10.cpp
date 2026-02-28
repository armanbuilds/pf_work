#include <iostream>
using namespace std;
main()
{
int wins , losses , draws ;
cout<<" enter the number of wins : ";
cin>> wins;
cout<<" enter the number of losses : ";
cin>> losses;
cout<<" enter the number of draws : ";
cin>> draws;
int points = ( wins * 3 ) + ( draws * 1 );
cout<<" pakistan has obtained " <<points<<" points in asia cup tournament ";
}