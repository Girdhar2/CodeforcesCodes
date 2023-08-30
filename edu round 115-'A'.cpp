#include<iostream>
#include<string>

using namespace std;

int main(){

   long long t,i,j,n;
   cin>>t;
   string a,b;
   for(i=0;i<t;i++){
       cin>>n;
        cin>>a>>b;
        for( j=0;j<n;j++){
            if(a[j]=='1' && b[j]=='1'){
                cout<<"NO"<<endl;
                break;
            }
        }

         if(j==n)
        cout<<"YES"<<endl;
   }

    return 0;
}