#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,k;
cin>>m>>n>>k;
int temp=1;int row,col,count=1;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
            int l;cin>>l;
            if(l==k&&count==1){
                temp=0;
                row=i;col=j;
                count++;
            }
    }
}
if(temp==0){
    cout<<"TRUE"<<endl;
    cout<<row<<" "<<col;
}
return 0;}
