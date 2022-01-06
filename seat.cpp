#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ,x,y;
        cin>>n>>x>>y;
        int k =(n+1)/2;
        int i =abs(k-x);
        int j = abs(k-y);
        if(x==y){
            cout<<0<<endl;
        }
        else if((i+j)%2==0){
            cout<<0<<endl;
        }
        else if((i+j)%2 !=0){
            cout<< 1<<endl;
        }
}
}