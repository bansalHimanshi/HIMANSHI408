/*#include<iostream>

using namespace std;
int main()
{
	int array[4],sum=0;
	
	for(int i=0;i<4;i++)
	{
		cin>>array[i];
	}
		for(int i=0;i<4;i++)
	{
		sum+=array[i];
	}
	cout<<"sum of elements:"<<sum;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n, array[50],sum=0,max,min;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	max=array[0];
	min=array[0];
	for(int i=0;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
		    min=array[i];
		}
	}
	cout<<"max and min are:"<<endl<<max<<endl<<min;
	
	
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int array[60],n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<array[i];
	}
}*/

#include<iostream>
using namespace std;
int main ()
{
	int array[40],frequency=0,num,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"enter a nmber";
	cin>>num;
		for(int i=0;i<n;i++)
	{
		if(array[i]==num)
		{
			frequency++;
		}
	}
	cout<<"frequency of elements:"<<frequency;
}

/*#include<iostream>
using namespace std;
int main ()
{
	int array[40],frequency=0,num,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"enter a nmber";
	cin>>num;
		for(int i=0;i<n;i++)
	{
		if(array[i]==num)
		{
			cout<<i;
		}
	}
	
}*/


