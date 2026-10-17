#include <iostream>
using namespace std;
int main(){ int n,a[100]; cout<<"Enter size (1-100): "; cin>>n; if(n<1||n>100)return 0; for(int i=0;i<n;i++)cin>>a[i]; cout<<"Array: "; for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<endl; }
