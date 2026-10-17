#include <iostream>
using namespace std;
int main(){int n,a[100],key;cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>key;for(int i=0;i<n;i++)if(a[i]==key){cout<<"Found at position "<<i+1<<endl;return 0;}cout<<"Not found\n";}
