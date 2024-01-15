#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1(3,10);
    for(int i=0; i<5; i++){
        cout<<v1[i];
    }
    cout<<v1.empty();
return 0;
}