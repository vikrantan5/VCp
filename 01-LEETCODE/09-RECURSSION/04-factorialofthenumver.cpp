#include <iostream>

using namespace std;

int ans = 1;
void facto(int n)
{
    if (n == 0)
    {
        return;
    }
    ans *= n;
    facto(n - 1);
}

int main()
{
    int n;
    cin >> n;
    facto(n);
    cout << ans;
}