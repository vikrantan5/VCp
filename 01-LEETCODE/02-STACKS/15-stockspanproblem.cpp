#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[8];
    stack<int> st;

    st.push(0);

    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = i - st.top();
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}