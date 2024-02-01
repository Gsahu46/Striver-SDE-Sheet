#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;

    int arr[n][n];
    cout <<"Enter the values of Arrays: " << endl;
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cin>> arr[i][j];
        }
        cout<< endl;
    }

    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0;i < (n/2); i++)
    {
        for(int j = 0;j < n; j++)
        {
            swap(arr[i][j], arr[n-1-i][j]);
        }
    }
    cout << "Resultant array is: "<<endl;

    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}