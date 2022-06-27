#include <iostream>
using namespace std;

void  bubbleSort(int arr[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Optimized Bubble sort
void  OptbubbleSort(int arr[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        bool swap = false;
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(swap == false) break;
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
    OptbubbleSort(arr, n);
    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}