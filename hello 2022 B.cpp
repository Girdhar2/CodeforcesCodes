#include<iostream>

using namespace std;

void helper(){
    long long n;
    cin>>n;
    long long l[n],r[n],c[n],lm,rm,cl,cr,lc,rc,arrl[n],arrr[n],countl,countr;
    for(long long i=0;i<n;i++){
        cin>>l[i]>>r[i]>>c[i];
        lm = l[0];
        rm = r[0];
        cl = c[0];
        cr = c[0];
        lc = 0;
        rc = 0;
        for(long long j=1;j<=i;j++){
            if(lm>l[j]){
                lm = l[j];
                cl = c[j];
                lc = j;
            }
            if(rm<r[j]){
                rm = r[j];
                cr = c[j];
                rc = j;
            }
        }
        for(long long j=0; j<=i; j++){
            if(lm == l[j]){
                if(cl > c[j]){
                    lc = j;
                    cl = c[j];
                }
            }
            if(rm == r[j]){
                if( cr > c[j]){
                    rc = j;
                    cr = c[j];
                }
            }
        }
        arrl[0] = lc;
        arrr[0] = rc;
        countl = 1;
        countr = 1;
        for(long long j=0;j<=i;j++){
            if(lm == l[j] && cl == c[j]){
                arrl[countl] = j;
                countl++;
            }
            if(rm == r[j] && cr == c[j]){
                arrr[countr] = j;
                countr++;
            }
        }
        if(countl>1 || countr>1){
            for(long long j=0;j<countl;j++){
                for(long long k=0;k<countr;k++){
                    if(arrl[j] == arrr[k]){
                        lc = arrl[j];
                        rc = arrl[j];
                    }
                }
            }
        }
         if(lc!=rc){
            if(r[lc] == rm)
            rc = lc;
            else if(l[rc] == lm)
            lc = rc;
        }
        if(lc == rc){
            cout<<c[lc]<<endl;
        }
        else{
            cout<<cl+cr<<endl;
        }
    }
}

int main(){

    long t;
    cin>>t;
    while(t--){
        helper();
    }
}