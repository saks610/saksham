#include<iostream>
using namespace std;

class solution {
	public:
	int pattern(int row ){
		char ch = 'A';
		for ( int i =1; i <= row ; i++){
			for (int j = 1; j<=i; j++){
				cout<<ch;
				
			}
			cout<<endl;
				ch++;
		}
	}
};


int main (){
	solution s1;
	int row;
	cout<<"enter the number of row :  "<< row<<endl;
	cin>>row;
	s1.pattern(row);
	return 0;
}
