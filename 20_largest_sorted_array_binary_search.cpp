#include <iostream>
using namespace std;
int main(){int n,a[100];cout<<"Enter size and sorted values: ";cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];int l=0,r=n-1;while(l<r){int m=l+(r-l)/2;l=m+1;}cout<<"Largest element = "<<a[l]<<endl;}
