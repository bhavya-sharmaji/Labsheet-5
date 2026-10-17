#include <iostream>
using namespace std;
int main(){int r,c,a[10][10];cout<<"Rows and columns (max 10): ";cin>>r>>c;if(r<1||r>10||c<1||c>10)return 0;for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>a[i][j];for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<a[i][j]<<" ";cout<<endl;}}
