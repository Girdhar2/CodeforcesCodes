#include<iostream>
#include<math.h>

using namespace std;

int main(){

    long long t;
    cin>>t;
    long long n,k,j=1,i,ans,s;
    for(i=0;i<t;i++){

        cin>>n>>k;

        for(s=0;s<t;s++){


        for(j=1;j<=k;j++){
            if(k<pow(2,j)){
                k=k-pow(2,j-1)-1;
                ans = pow(n,j-1);
                for(int p=j-1;p>0;p--){
                    if(k>pow(2,p-1)){
                        ans += pow(n,p-1);
                    }

                    else if(k=pow(2,p-1)){
                    ans += pow(n,p-1);
                    break;
                    }

                    k -= pow(2,p-1);
                }
                break;
            }

            else if(k=pow(2,j)){
                ans=pow(n,j);
                break;
            }

        }
    }
    
    cout<<ans<<endl;
    }
    

    return 0;
}