#include <iostream>
#include <string>
using namespace std;
int main(){int n;string a[100];cout<<"Number of students: ";cin>>n;if(n<1||n>100)return 0;cin.ignore();for(int i=0;i<n;i++)getline(cin,a[i]);for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){string t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)cout<<a[i]<<endl;}
