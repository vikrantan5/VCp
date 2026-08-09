#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

void solve(stack<string> &val, stack<char> &op)
{
    char ch = op.top();
    op.pop();
    string val2 = val.top();
    val.pop();
    string val1 = val.top();
    val.pop();
    string n;
    if (ch == '+')
    {
        n = val1 + val2 + string(1, ch);
    }
    else if (ch == '-')
    {
        n = val1 + val2 + string(1, ch);
    }
    else if (ch == '*')
    {
        n = val1 + val2 + string(1, ch);
    }
    else if (ch == '/')
    {
        n = val1 + val2 + string(1, ch);
    }

    val.push(n);
}

int main()
{

    stack<string> val;
    stack<char> op;
    unordered_map<char, int> mp;
    mp['+'] = 1;
    mp['-'] = 1;
    mp['/'] = 2;
    mp['*'] = 2;

    string s = "(7+9)*4/8-3";

    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '(')
        {
            op.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (op.top() != '(')
            {

                solve(val, op);
            }
            op.pop();
        }
        else if (s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '-')
        {

            if (op.empty())
            {
                op.push(s[i]);
            }

            else if (op.top() == '(' || mp[op.top()] < mp[s[i]])
            {
                op.push(s[i]);
            }
            else
            {
                while (!op.empty() && mp[op.top()] >= mp[s[i]])
                {
                    solve(val, op);
                }
                op.push(s[i]);
            }
        }
        else
        {
            val.push(string(1, s[i]));
        }
        i++;
    }

    while (!op.empty())
    {
        solve(val, op);
    }

    cout << val.top();
}