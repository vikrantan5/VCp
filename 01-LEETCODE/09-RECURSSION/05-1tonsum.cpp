#include <iostream>
using namespace std;
int s = 0;
void summe(int n)
{
    if (n == 0)
    {
        return;
    }
    s += n;
    summe(n - 1);
}
int main()
{
    int n;
    cin >> n;
    summe(n);
    cout << s;
}