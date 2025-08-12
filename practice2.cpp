//Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m;
    cin >> n;
    stack<int>st;
    for (int i = 0;i<n;i++)
    {   
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    if(!st.empty() != !q.empty())
    {
         cout << "Not Same" << endl;
    }
    else 
    {
        bool flag = true;
        while (!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag == true)
        {
           cout << "Same" << endl; 
        }
        else
        {
           cout << "Not Same" << endl;
 
        }
        
    }

    
    return 0;
}