// Fitra Fajar
// Instagram : @vzar__
// want to see my work? | github.com/fitrazar

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int uts, uas, aktif;
	double total, bagi;
	string nama, npm;
	
	cout<<"INPUT"<<endl;
	cout<<"Nama		: ";
	getline (cin, nama);
	
	cout<<"NPM		: ";
	getline (cin, npm);
	
	cout<<"UTS		: ";
	cin>>uts;
	
	cout<<"UAS		: ";
	cin>>uas;
	
	cout<<"Keaktifan	: ";
	cin>>aktif;
	
	bagi = 3;
	total = (uts + uas + aktif)/bagi;
	
	cout<<endl;
	cout<<"OUTPUT"<<endl;
	cout<<"Nama			: "<<nama<<endl;
	cout<<"NPM			: "<<npm<<endl;
	cout<<"Total Nilai		: "<<total<<endl;
	
	return 0;
}
