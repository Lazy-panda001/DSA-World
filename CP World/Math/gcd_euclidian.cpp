#include <iostream>
using namespace std;
int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
int main(void)
{
    int x, y;
    cin>>x>>y;
    cout<<gcd(x,y);
}
//T.C : O(logab)
