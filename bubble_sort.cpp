#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void swap(int * a,int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
int main(void)
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   bubble_sort(arr,n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}