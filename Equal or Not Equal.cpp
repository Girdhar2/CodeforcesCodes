#include<iostream>
#include<string>
using namespace std;

bool equal(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='N')
        k++;
    }
    if(k==1)
    return 0;
    else
    return 1;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        bool ans = equal();
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}