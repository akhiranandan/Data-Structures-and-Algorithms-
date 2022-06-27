#include <iostream>
using namespace std;

// When in an array, there are two sorted parts and we wante to combine them together, we use this function
void mergeFun(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
       left[i] = a[low+i];
    }
    for (int j  = 0; j < n2; j++)
    {
       right[j] = a[n1+j];
    }
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while(i < n1) 
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < n2) 
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int n,a,b,c;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> a >> b >> c;
    mergeFun(arr, a, b, c);
    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}