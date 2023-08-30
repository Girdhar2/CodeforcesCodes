#include<iostream>
#include<string>
using namespace std;

bool square(){
    string s;
    cin>>s;
    if(s.length()%2==1)
    return 0;
    int n = s.length()/2,i=0;
    for(i=0;i<n;i++){
        if(s[i]!=s[n+i])
        return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        bool ans = square();
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}