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
	for(i=0;i<word.length();++i)
	{
	if(word[i]=='a')
	count++;
	//break;
	}
	//count++;
}

	cout<<"num of words of 'a' == "<<count<<endl;
	fin.close();
}

	return 0;
}

