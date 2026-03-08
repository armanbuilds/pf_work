#include <iostream>
using namespace std;
main()
{
    string name;
    cout << " enter the name of shape : ";
    cin >> name;
    float s, l, w , r , b , h;
    if (name == "square")
    {
        cout << " enter the side of " << name << " is ";
        cin >> s;
        cout << s * s;
    }
    if (name == "rectangle")
    {
        cout << " enter the length of rectangle : ";
        cin >> l;
        cout << " enter the width of rectangle : ";
        cin>>w;
        cout << l * w;
    }
if(name == "circle"){
    cout<<" enter the radius of circle : ";
    cin>>r;
    cout<<" the area of circle is :  "<<3.14 *( r*r);
} 
if(name == "triangle"){
    cout<<" enter the base of triangle : ";
    cin>>b;
    cout<<" enter the height of triangle : ";
    cin>>h;
    cout<< " the area of triangle is : "<< ( b * h)/2;
}
}