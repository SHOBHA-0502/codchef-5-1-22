#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
         vector<int>v;
         
         
         for(int i =0 ; i<n;i++){
             int a;
             cin>>a;
             v.push_back(a);
         }
         while(v.size()!=1){
             vector<int>v1(v.size(),0);
             //cout<< v1.size()<<" //"<<endl;;
             
             for(int i =0;i<v1.size()-1;i++){
                 for(int j =i+1;j<v1.size();j++){
                     int k;
                    
                     k = v[i]&v[j];

                     
                     v1.push_back(k);
                     //cout<<"//"<< v1.size()<<endl;
                    
                 }
             }
             int m = (v1[0] | v1[v1.size()-1]);
             v1.erase(v1.begin());
             v1.erase(v1.end()-1);
             v1.push_back(m);
            
            //cout<<"[["<< v1.size()<<endl;
             
             
         }
         cout<<v1[0]<<endl;

}
}