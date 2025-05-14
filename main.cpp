#include <iostream>
using namespace std;
void tabel(int);
int main(){
	int no;
	cout<< "Enter number : ";
	cin>>no;
	tabel(no);
	return 0;
}
void tabel (int no){
	for(int i=1 ; i<=10 ; i++){
		cout<<i<< " * "<<no<< " = "<<i*no<<endl;
	}
	}
