#include <iostream>
using namespace std;
int main(){int n,a[100],key,pos=-1;cout<<"Enter size: ";cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];cout<<"Search for: ";cin>>key;for(int i=0;i<n;i++)if(a[i]==key){pos=i;break;}if(pos==-1)cout<<"Not found\n";else cout<<"Found at position "<<pos+1<<endl;}
