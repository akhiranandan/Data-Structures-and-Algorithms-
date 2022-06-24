#include <iostream>
using namespace std;

//Iterative
int bSearch1(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) low = mid+1;
        else
        {
            high = mid-1;
        } 
    }
    return -1;
}

//Recursive
int bSearch2(int arr[], int low, int high, int x)
{
    if(low > high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] < x) return bSearch2(arr, mid+1, high, x);
    else return bSearch2(arr, low, mid-1, x);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int ind = bSearch1(arr, n, x);
    cout << ind << "\n";
    return 0;
}