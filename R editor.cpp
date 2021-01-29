#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ofstream outfile;
ifstream ifile;
char ch;
int main()
{
string name;
 cout << "A simplified text file writer like (nano) but simplified \n TYPE NAME OF TEXT FILE :\n\t\t";

cin >> name;
cout << "Star Typing to store text in file "<<name<<".txt : \n\t\t";
//ifile.open( name + ".txt");
 
while(ch != '~')
{
	
	//ch =cin.get();
	outfile.open(name + ".txt",ios::app);
	
	outfile << ch ;
		
outfile.close();
	
	
	}


}
