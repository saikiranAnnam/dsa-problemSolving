#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack< pair<char, int> > s;
    s.push(make_pair(1,2));
    s.push(make_pair(4,5));
    cout << s.top().second;
return 0;
}