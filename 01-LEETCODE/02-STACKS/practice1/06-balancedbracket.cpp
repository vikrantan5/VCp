#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{

    vector<string> qt;

    cout << "enter the number of elems" << endl;
    int n;
    cin >> n;

    cout << "ENter elems" << endl;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        qt.push_back(temp);
    }

    stack<char> st;

    vector<bool> result;

    for (int i = 0; i < qt.size(); i++)
    {

        while (!st.empty())
        {
            st.pop();
        }
        for (auto el : qt[i])
        {
            if (el == '(')
            {
                st.push(el);
            }
            else if (el == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(el);
                    break;
                }
            }
        }
        if (st.size() == 0)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << "String s = " << qt[i] << " :: " << result[i];
        cout << endl;
    }
}