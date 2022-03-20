#include<fstream>
#include<iostream>
#include<string.h>
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
	
	if(word[word.length()-1]=='s')
	{
	count++;

	}
	//break;
	
	//count++;
}

	cout<<"number of words ends with 's' == "<<count<<endl;
	fin.close();
}

	return 0;
}
