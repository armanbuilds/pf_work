#include <iostream>
using namespace std;
main(){
    int no1 , no2 ,no3  ;
float price1 , price2 , price3 ;
cout<< " Red roses : ";
cin>>no1;
cout<<" White roses : ";
cin>>no2;
cout<<" tulip : ";
cin>>no3;
price1 = 2.0;
price2 = 4.10;
price3 = 2.50;
float totalprice = (price1 * no1) + (price2 * no2) + (price3 * no3);
cout<<" origional price : "<<totalprice<<endl;
if(totalprice > 200){
    cout<<"dicounted price : "<<totalprice - (totalprice *  20/100); 
}
else{ cout<<" dicounted price : 0 ";}
}