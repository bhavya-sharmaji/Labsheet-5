#include <iostream>
using namespace std;
int main(){int n,a[100],key;cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>key;bool found=false;for(int i=0;i<n;i++)if(a[i]==key){found=true;break;}if(found)cout<<"Number is present\n";else cout<<"Number is not present\n";}
