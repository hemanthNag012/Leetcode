#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int l,int r){
    if(l >= r){
        return;
    }
    swap(arr[l],arr[r-1]);
    print(arr,l+1,r-1);
}

int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	print(arr,0,5);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
