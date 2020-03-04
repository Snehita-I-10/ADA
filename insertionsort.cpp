#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void insertion(int arr[],int n)
{	int key,j;
	for(int i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
}
int main()
{	int n,j;
    int ch;
	clock_t start, end; ;
	while(1)
	{
	cout<<"enter n"<<endl;
	cin>>n;
	int key,arr[n];
	cout<<"array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	start = clock(); 
	insertion(arr,n);
	end = clock(); 
		s[] = {1, 3, 0, 5, 8, 5}, f[] = {2, 4, 6, 7, 9, 9}
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
	

	
