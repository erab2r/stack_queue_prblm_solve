//Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.
#include<bits/stdc++.h>
using namespace std;

class myStack 
{
    public:
        list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();   
    }

};

int main()
{   
    myStack st1,st2;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    // while (!st1.empty())
    // {
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }
    cout << endl;
    int m;
    cin >> m;
    for(int i = 0;i<m;i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    // while (!st1.empty())
    // {
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }
   if(st1.size() != st2.size())
   {
    cout <<"Not Same" << endl;
   }
   else
   {
    bool flag = true;
    while (!st1.empty() && !st2.empty())
    {
        if(st1.top() != st2.top())
        {
            flag = false;
            break;
        }
        st1.pop();
        st2.pop();
    }
    if(flag == true)
    {
        cout << "Same" << endl;
    }
    else
    {
      cout <<"Not Same" << endl;  
    }
    
   }
    
    return 0;
}