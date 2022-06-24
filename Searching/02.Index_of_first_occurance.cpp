#include <iostream>
using namespace std;

int firstOcc1(int arr[], int low, int high, int x)
{
    if(low > high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] < x) return firstOcc1(arr, mid+1, high, x);
    else if(arr[mid] > x) return firstOcc1(arr, low, mid-1, x);
    else
    {
        if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
        else return firstOcc1(arr, low, mid-1, x);
    }
}

int firstOccu2(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] < x) low = mid+1;
        else if (arr[mid] > x) high = mid-1;
        else
        {
            if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
            else high = mid - 1;
        } 
    }
    return -1;
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
    int ind1 = firstOcc1(arr, 0, n-1, x);
    int ind2 = firstOccu2(arr, n, x);
    cout << ind1 << " " << ind2 << "\n";
    return 0;
} 