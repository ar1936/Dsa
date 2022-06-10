/*
Problem Link :- https://www.geeksforgeeks.org/recursive-solution-count-substrings-first-last-characters/
Author :- Ashish Ranjan
Date :- 10/06/2022
*/

#include <iostream>
using namespace std;
/*
                            Method 1 (BY Self)

in this method i simply replace 2 loop using function

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
} */




/*
Method 2 => GFG 


int solve(string s, int i, int j,int n){
    if(n==1){
        return 1;
    }
    if(n<=0)
        return 0;
    int ans = solve(s, i+1,j,n)+
              solve(s,i,j-1,n-1)-
              solve(s,i+1,j-1,n-2);
    if(s[i]==s[j])
        ans++;
    return ans;
}
*/
int main()
{
    string s;
    cin>>s;
    int ans=0;
    solve(s,0,ans);
    cout<<solve(s,0,s.size()-1,s.size())<<"\n";
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




