#include <iostream>
using namespace std;

int main(){
	//declaring an int multidimensional array
	int mArray[2][3];

	//assigning values to each element
	int counter=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			mArray[i][j]=counter;
			counter+=1;
		}
	}
		

	//printing each element of the multidimensional array
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"Elemento "<<i<<"-"<<j<<" es "<<mArray[i][j]<<endl;
		}
	}

	cout<<"\n"<<flush;	

	//declaring a multidimensional string array and assigning values
	string sArray[][4]={{"A","B","C","D"},{"K","L","M","N"},{"V","W","X","Y"}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Elemento "<<i<<"-"<<j<<" es "<<sArray[i][j]<<endl;
		}
		}
	

	return 0;
}
