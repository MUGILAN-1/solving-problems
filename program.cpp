#include<iostream>
using namespace std;

int main()
{
	int n,a[50],temp=0;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			for(int j=i+1;j<=n;j++){
				if(a[j]>0){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					break;
				}
			}
		}
		cout<<a[i]<<" ";
	}
}