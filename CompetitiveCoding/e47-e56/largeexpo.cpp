#include<bits/stdc++.h>
using namespace std;
const long long int M=1e18+7;


int binMultiply(long long a,long long b){
    int ans=0;
    while(b>0){
        if(b&1){
            ans=(ans+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}

int binExp(long long a, long long b){
   int ans=1;
   while(b>0){
    if(b&1){
        ans=binMultiply(ans,a);
    }
    a=binMultiply(a,a);
    b>>=1;
   }

return ans;
}



int main()
{

cout<<binExp(2,10);
return 0;
}

