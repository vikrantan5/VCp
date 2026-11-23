#include <iostream>

using namespace std;

int raise(int a, int b)
{
    if (b == 1)
    {
        return a;
    }


    int p = raise(a, b / 2);
    if (b % 2 == 0)
    {
        return p * p;
    }
    else
    {
        return p * p * a;
    }
}

int main()
{

    int n;
    cin >> n;

    int power;
    cin >> power;
    int ans = 0;

    ans = raise(n, power);

    cout << ans;
}