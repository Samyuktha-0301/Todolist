#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b){
int sum=0;
int sam=0;
for(int i=0;i<a.length();i++){
    sum+=a[i]-'0';
    sam+=b[i]-'0';
}
if(sum==sam)return true;
return false;

}
int func(string s,int n){
   int ans=0;
    for(int i=0;i<n;i++){
        int j=n-1;
        while(j>i){
           if((j-i+1)%2==0){
              string sum=s.substr(i,(j-i+1)/2);
              string end=s.substr((i+(j-i+1)/2),(j-i+1)/2);
             if( check(sum,end)){
              ans=max(ans,(j-i+1));
             }
           }
           j--;
        }
    }
    return ans;
}
int main(){
int n;
cin>>n;
string s;
cin>>s;
cout<<func(s,n)<<endl;

    return 0;
}