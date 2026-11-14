#include <iostream>

#include <stack>

using namespace std;

void display(stack<int> &st)
{
    if (st.empty())
    {

        return;
    }

    int temp = st.top();
    st.pop();
    display(st);

    st.push(temp);
    cout << st.top() << endl;
}

void pushAtidx(stack<int> &st, int idx, int elem)
{

    if (st.size() - 1 == idx)
    {
        int temp = st.top();
        st.pop();
        st.push(elem);
        st.push(temp);
        return;
    }

    int temp = st.top();
    st.pop();
    pushAtidx(st, idx, elem);
    st.push(temp);
}

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // st.size()===5

    int idx = 2;

    int elem = 90;
    pushAtidx(st, idx, elem);

    display(st);
}