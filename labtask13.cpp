#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers, one per line:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        // check duplicate
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Already Entered: " << arr[i] << endl;
                break;
            }
        }
    }

    cout << "Unique numbers entered: ";

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}