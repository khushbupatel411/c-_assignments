#include<fstream>
#include<iostream>
using namespace std;
int main()
{
fstream fin;
fin.open("assign1.txt");
int count=0;
int i;

string word;
if(!fin)
cout<<"file cant open"<<endl;
else
{
	while(!fin.eof())
{
	fin>>word;
	
	if(word[0]=='e')
	{
	count++;
	}
	//count++;
}

	cout<<"number of words start with 'e' == "<<count<<endl;
	fin.close();
}

	return 0;
}
