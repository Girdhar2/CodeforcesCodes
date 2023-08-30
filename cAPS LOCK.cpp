#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;
    int a[2],i,t;
    if(s.length()==1){
      if(s[0]>96){
      t=s[0];
      t -= 32;
      s[0]=t;
      }
    }
    else{
    a[0]=s[0];
    a[1]=s[1];
    if(a[0]>96 && a[1]<96){
        a[0] -= 32;
        s[0]=a[0];
        for(i=1;i<s.length();i++){
            t=s[i];
            t += 32;
            s[i]=t;
        }
    }

     else if(a[0]<96 && a[1]<96){
        for(i=1;i<s.length();i++){
            t=s[i];
            t += 32;
            s[i]=t;
        }
    }
}
    cout<<s;

    return 0;
}