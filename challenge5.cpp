#include <iostream>
using namespace std;
main()
{
    float bill ;
    cout << " enter the bill : ";
    cin>>bill;
    float discount1, discount2 ;
    discount1 = bill - ( bill * 5 / 100 );
    discount2 = bill - ( bill * 10 / 100 );
    if (bill > 5000)
    {
        cout << " your dicounted bill is : " << discount2;
    }
    else
    {
        cout << " your discounted bill is : " << discount1;
     }
}