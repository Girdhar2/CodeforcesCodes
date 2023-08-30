#include<iostream>

using namespace std;

int main(){

    long n,i,q,a=0,b=0,c=0,d=0,p;
    cin>>n; 

    for(i=0;i<n;i++){
        cin>>q;
        if(q==1)
        a++;
        else if(q==2)
        b++;
        else if(q==3)
        c++;
        else
        d++;
    }   
    p=d;
    if(c>=a){
        if(b%2==0)
        p += c+b/2;
        else
        p += c+b/2+1;
    }
    else{
        if(b%2==0){
            if((a-c)%4==0)
            p += c+(a-c)/4+b/2;
            else
            p += c+(a-c)/4+1+b/2;
        }
        else{
            if((a-c)%4==3)
            p += c+(a-c)/4+b/2+2;
            else
            p += c+(a-c)/4+b/2+1;
        }
    }

    cout<<p;

    return 0;
}