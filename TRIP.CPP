#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
         long long int z,y,a,b,c;
         cin>>z>>y>>a>>b>>c;
         int k = z-y;
         if(a+b+c<=k){
             cout<<"yes"<<endl;
         }
         else {
             cout<<"no"<<endl;
         }
}
}