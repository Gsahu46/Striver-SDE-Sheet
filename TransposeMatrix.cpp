#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    cout <<"Enter the value of m: " << endl;
    cin >> m;

    int arr[n][m];
    cout <<"Enter the values of Arrays: " << endl;
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < m; j++)
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
        cout<< endl;
    }
    cout << "Resultant array is: "<<endl;

    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }
    

    return 0;
}