#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,7,9};
    int r,l,mid;
    int n;
    cout<<"emter a value: ";
    cin>>n;
    l=0;
    int x=-1;
    r=sizeof (arr)/sizeof(int)-1;
    mid=r+l/2;
    int i=0;
    while(i<5){
        if(n==arr[mid]){
            cout<<mid;
            break;
        }
        if(n<mid){
            r=mid;
        }
        if(n>mid){
            l=mid;
        }
        // else{
        //     cout<<x;
        // }
    }
    cout<<"hi";
}