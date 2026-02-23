#include <iostream>
using namespace std;
int main(){
    int n,i,prev,curr;
    cin >> n;
    if(n>=1){
        cout<<0<<'\n';
        if(n>=2){
            cout<<1<<'\n';
            if(n>2){
                prev=0;
                curr=1;
                for(i=3;i<=n;i++){
                    curr+=prev;
                    prev=curr-prev;
                    cout<<curr<<'\n';
                }
            }
        }
    }
    return 0;
}
