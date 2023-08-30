#include<iostream>
#include<string>

using namespace std;

int main(){

    int year;
    cin>>year;

    string s;

    for(int i=year+1;i<=9012;i++){

        s=to_string(i);
        if( s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout<<i;
            break;
        }

    }

    return 0;
}