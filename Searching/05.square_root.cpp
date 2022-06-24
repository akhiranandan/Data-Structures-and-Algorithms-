#include <iostream>
using namespace std;

int sqRoot(int n)
{
    int low = 0, high = n, ans = -1;
    while(low <= high)
    {
        int mid = (high+low)/2;
        int m = mid*mid;
        if (m == n) return mid;
        else if(m > n) high = mid-1;
        else 
        {
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = sqRoot(n);
    cout << ans << "\n";
    return 0;
}