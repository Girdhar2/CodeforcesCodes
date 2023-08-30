#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;


bool helper(){
    long long a,b,c ;
    cin>>a>>b>>c;
    
    if(a==0 && b==0 && c==0 ) 
      return true;
    
      if(b == 0) {
        if(a+c == 0)
        return true;
      }

    else if(((a+c)/2)%b == 0 && (a+c)%2 == 0 && ((a+c)/2)*b > 0)
    return true;
    
    if( a == 0) {
      if(2*b - c == 0 )
      return true;
    }
    else if((2*b-c)%a == 0 && (2*b-c)*a > 0)
    return true;
    
    if(c == 0) {
      if(2*b-a == 0)
      return true;
    }
    else if((2*b-a)%c == 0 && (2*b-a)*c > 0)
    return true;

    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
       bool a = helper();
       if(a)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}