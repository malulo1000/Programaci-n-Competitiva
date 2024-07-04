#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<int> st;
    string result = "";

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (!st.empty())
            {
                st.pop();
            }
            else if (result.empty())
            {
                cout << ":(" << endl;
                return 0;
            }
            else
            {
                result = "?" + result;
            }
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                result = "(" + result;
            }
        }
    }

    while (!st.empty())
    {
        result = "?" + result;
        st.pop();
    }

    if (!result.empty())
    {
        cout << ":(" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}
