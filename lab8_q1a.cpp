#include<iostream>
using namespace std;
//function for thr sum of elements of array
int sumarr ()
{
	//input of size and elements of array using loops
	int n, sum=0;
	int arr[n];
	cout<< "how many numbers you wan to sum"<< endl;
	cin>>n;
	for(int j=0; j<n; j++)
	{
		cin>>arr[j];
	}
	for (int i=0; i<n;i++)
	{
		sum+=arr[i];
	}
	//returning the sum
	return sum;
}
int main()
{
	int sum = sumarr();
	//output
	cout <<"summation of following numbers is "<<sum;
}
	
