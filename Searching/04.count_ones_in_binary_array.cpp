#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == 0) low = mid+1;
        else
        {
            if(mid == 0 || arr[mid-1] != arr[mid]) return (n-mid);
            else high = mid - 1;
        } 
    }
    return 0;
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
    int ind = countOnes(arr, n);
    cout << ind << "\n";
    return 0;
}