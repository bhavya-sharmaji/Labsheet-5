#include <iostream>
using namespace std;
int main(){int n,a[100];cout<<"Enter size (1-100): ";cin>>n;if(n<1||n>100)return 0;for(int i=0;i<n;i++)cin>>a[i];int mx=a[0],mn=a[0];for(int i=1;i<n;i++){if(a[i]>mx)mx=a[i];if(a[i]<mn)mn=a[i];}cout<<"Maximum = "<<mx<<"\nMinimum = "<<mn<<endl;}
