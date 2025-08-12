//Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    queue<int> q1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    stack<int> st;
    while (!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }

    queue<int> q2;
    while (!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    
    cout << endl;
    return 0;
}
