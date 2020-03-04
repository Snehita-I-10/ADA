#include<iostream>

using namespace std;

int main()
{
 int n,j=1,k=0;
    
 cout<<"enter length"<<endl;
 cin>>n;
 int s[n],f[n],arr1[n];
 cout<<"enter the starting time of n meetings:"<<endl;
 for(int i=0;i<n;i++)
	cin>>s[i];
 cout<<"enter the finishing time of n meetings:"<<endl;
 for(int i=0;i<n;i++)
	cin>>f[i];
  
	int key,key1;
	for(int i=0;i<n;i++)
	{
		key=f[i];
		key1=s[i];
		j=i-1;
		while(j>=0 && f[j]>key)
		{
			f[j+1]=f[j];
			s[j+1]=s[j];
			j--;
		}
		f[j+1]=key;
		s[j+1]=key1;
		
	}
	
		arr1[k]=0;k++;
	for(int i=0;i<n;i++)
	{
	cout<<s[i]<<","<<f[i]<<" "<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		if(s[i+1]>f[arr1[k-1]])
		{	arr1[k]=i+1;
			k++;
		}
		
	}
	for(int i=arr1[0];i<arr1[k];i++)
	{
		cout<<s[i]<<","<<f[i]<<" "<<endl;
	}
		
	return 0;
	

}
