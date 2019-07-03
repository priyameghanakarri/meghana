#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1000004];
ll temp[1000006];
void merge(ll l,ll m,ll r){
    ll l1=l;
    ll l2=m+1;
    ll k=l;
    while(l1<=m && l2<=r){
        if(arr[l1]<=arr[l2]){
            temp[k++]=arr[l1++];
        }
        else{
            temp[k++]=arr[l2++];
        }
    }
    while (l1<=m){
        temp[k++]=arr[l1++];
    }
    while(l2<=r){
        temp[k++]=arr[l2++];
    }
    for(ll i=l;i<=r;i++){
        arr[i]=temp[i];
    }
}
void mergesort(ll l,ll r){
    if(l < r){
        ll mid=l + (r - l)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        merge(l,mid,r);
    }
}
int main(void)
{
   ll n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   mergesort(0,n-1);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}