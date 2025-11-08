#include<iostream>
using namespace std;

class solution {
	
	public :
		int delete_ele(int arr[], int n , int pos){
			if ( pos < 0 || pos > n){
				cout<<"invalid position"<<endl;
			}
			
			
			for ( int i = pos; i<n; i++){
				arr[i] = arr[i+1];
			}
			return n-1;
		}
	
	
	// this is the simple example of array travaling and searching 	
	void display( int arr[], int n){
		for ( int i =0 ; i< n; i++){
			cout<<arr[i]<<"";
		}
	}
};



int main (){
	solution s1;
	int arr [] = { 1,2,3,4,5,6,7};
	int n = 7;
	int position = 4;
s1.display(arr, n);
	s1.delete_ele(arr ,n,position);
	
	cout<<"the array after deleting the element is :"<<endl;
	s1.display(arr,n);
	return 0;
	
}
