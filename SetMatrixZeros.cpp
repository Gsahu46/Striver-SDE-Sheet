#include<bits/stdc++.h>
using namespace std;

void Setzeros(int** arr, int n, int m)
{
    int row[n] = {0}; 
    int col[m] = {0}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                arr[i][j] = 0;
            }
        }
    }
}


int main()
{
    int n, m;
    cout << "Enter the value of n: "<< endl;
    cin >> n;

    cout << "Enter the value of m: "<< endl;
    cin >> m;

    int** arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    cout <<"Enter the values of matrix: "<< endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    Setzeros(arr, n, m);
    cout << "Resultant matrix: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Don't forget to deallocate the memory
    for(int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}