#include <iostream>
using namespace std;

int solve(string s, int n){
    if(n==1){
        return s[0]-'0';
    }
    return (10*solve(s,n-1)+s[n-1]-'0');
}

int main()
{
    string s;
    cin>>s;
    cout<<solve(s,s.size())<<"\n";
}