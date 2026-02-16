#include<bits/stdc++.h>
using namespace std;
void nextp(vector<int>&a){
    int n= a.size();
    int idx=-1;
    for(int i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) {
        reverse(a.begin(),a.end());
        return;
    }
    for(int i=n-1; i>idx; i--){
        if(a[i]>a[idx]) {
            swap(a[i],a[idx]);
            break;
        }
    }
    reverse(a.begin()+idx+1,a.end());
    return;
}
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int &i:a) cin>>i;
    nextp(a);
    for(int i:a) cout<<i<<" ";
    cout<<endl;
}