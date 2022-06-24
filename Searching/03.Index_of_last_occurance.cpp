#include <iostream>
using namespace std;

//Iterative
int lastOcc1(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] < x) low = mid+1;
        else if (arr[mid] > x) high = mid-1;
        else
        {
            if(mid == n-1 || arr[mid+1] != arr[mid]) return mid;
            else low = mid + 1;
        } 
    }
    return -1;
}

//Recursive
int lastOcc2(int arr[], int low, int high, int x, int n)
{
    if(low > high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] < x) return lastOcc2(arr, mid+1, high, x, n);
    else if(arr[mid] > x) return lastOcc2(arr, low, mid-1, x, n);
    else
    {
        if(mid == n-1 || arr[mid+1] != arr[mid]) return mid;
        else return lastOcc2(arr, mid+1, high, x, n);
    }
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
    int ind1 = lastOcc1(arr, n, x);
    int ind2 = lastOcc2(arr, 0, n-1, x, n);
    cout << ind1 << " " << ind2 << "\n";
    return 0;
}