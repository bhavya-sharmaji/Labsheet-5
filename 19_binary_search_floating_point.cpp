#include <iostream>
#include <cmath>
using namespace std;
int main(){int n;double a[100],key;cout<<"Enter size and sorted decimals: ";cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>key;int l=0,r=n-1;bool found=false;while(l<=r){int m=l+(r-l)/2;if(fabs(a[m]-key)<0.000001){found=true;break;}if(a[m]<key)l=m+1;else r=m-1;}cout<<(found?"Found\n":"Not found\n");}
