#include<iostream>
using namespace std;
// using bubble sort and swap
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  

void sort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}

int main (){
	// taking input for array and largest and smallest element
	int n,x,k,l;
	cout <<" on how many numbers you want to do operations on ? ";
	cin >> n;
	cout<< "what are the numbers u want to do operations on? ";
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin >>arr[i];
	}	
	cout << " which highest number you want as output? ";
	cin >> k;
	cout << " which lowest number you want as output? ";
	cin >> l;
	//sorting array and making its replica
	sort(arr,n);
	int ara [n];   	
  	for ( int i = 0; i < n; i++ ) {
      	 ara[i] = arr[i];}
	cout << endl;
	//outputing the kth number of element which is the kth largest number
	cout << "The kth largest number is ";
 	cout<< ara[k-1];
	cout << endl;
	//outputing the (n-l)th number of element which is the lth smallest number
	cout << "The lth smallest number is ";	
	cout << ara[n-l];   	
	}

