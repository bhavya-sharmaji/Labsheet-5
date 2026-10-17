#include <iostream>
using namespace std;
int main(){int n,a[100],key;cout<<"Enter size then sorted values: ";cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];cout<<"Search for: ";cin>>key;int l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==key){cout<<"Found at position "<<m+1<<endl;return 0;}if(a[m]<key)l=m+1;else r=m-1;}cout<<"Not found\n";}
