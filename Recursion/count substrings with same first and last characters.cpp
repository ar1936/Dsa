#include <iostream>
using namespace std;

int solve2(string s, int i , int j,int &ans2){
    if(j==s.size()){
        return 0 ;
    }
    if(s[i]==s[j])
        ans2++;
    solve2(s, i , j+1,ans2);
    return ans2;
}
void solve(string s, int i,  int &ans){
    int j=i,ans2=0; 
    if(i==s.size()){
        return ;
    }
    // for(;j<s.size();j++){
    //     if(s[i]==s[j]){
    //         ans++;
    //     }
    // }
    solve2(s,i,j,ans2);
    ans+=ans2;
    solve(s,i+1,ans);
} 
int main()
{
    string s;
    cin>>s;
    int ans=0;
    solve(s,0,ans);
    // for(int i=0;i<s.size();i++){
    //     for(int j=i;j<s.size();j++){
    //         if(s[i]==s[j]){
    //             ans++;
    //         }
    //     }
    // }
    cout<<ans<<'\n';
    return 0;
}