//this describes how stl find function is designed
#include <bits/stdc++.h>
using namespace std;
template <class forwarditerator, class T>//no semicolon after this as thiss is part of the generic function
forwarditerator search(forwarditerator begin, forwarditerator end, T key)
{
    while (begin != end)
    {
        if (*begin == key)
        {
            return begin;
        }
        begin++;
    }
    return end;
}
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    auto it = search(l.begin(), l.end(), 3);
    if (it == l.end())
    {
        cout << "Element does not exists";
    }
    else
    {
        cout << "Element Exists";
    }
    return 0;
}
