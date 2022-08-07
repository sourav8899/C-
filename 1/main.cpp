#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int q,l,r;
    int n;
    cin>>n;
    vector<int >arr(n,0);


    cout<<"enter the no of quries you want to enter";
    cin>>q;
    while(q--){
       cin>>l>>r;
       arr[l]++;
       if(r+1<n){
        arr[r+1]--;
       }

    }

    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
