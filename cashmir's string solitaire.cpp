#include<iostream>
#include<string>

using namespace std;

int main(){

    int t,i,a=0,b=0,c=0;
    string s;
    
    cin>>t;

    int k[t];
    
    for(i=0;i<t;i++){

        cin>>s;
        a=b=c=0;

        for(int j=0;j<s.length();j++){
            if(s[j]=='A')
            a++;
            else if(s[j]=='B')
            b++;
            else 
            c++;
        }

        if(b==a+c)
        k[i]=1;
        else
        k[i]=0;
    }

    for(i=0;i<t;i++){
        if(k[i]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}