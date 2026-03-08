#include <iostream>
using namespace std;
main()
{ 
string countryname;
cout<<" enter the country name : ";
cin>>countryname;
int price ;
cout<<" ticket price : ";
cin>>price;
if(countryname == "ireland" ){
    cout<< " discounted price : "<<price - (price * 0.1); 
}
else{ cout<<" discounted price : "<<price - (price * 0.05);
}
}