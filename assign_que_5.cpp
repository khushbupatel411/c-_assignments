#include<fstream>
#include<iostream>
#include<string>

using namespace std;
class student
{
	public:
	int id;
	char studentname[25];
	char branch[25];
	char location[25];


void getdata()
{
	cout<<"ent ID :"<<endl;
	cin>>id;
	cout<<"ent student name :"<<endl;
	cin>>studentname;
	cout<<"ent branch :"<<endl;
	cin>>branch;
	cout<<"ent location :"<<endl;
	cin>>location;

}

void addrecord()
{
	fstream f;
	student stu;
	
	f.open("studentlist.dat",ios::app | ios::binary);
	stu.getdata();
	f.write((char*)&stu,sizeof(stu));
	f.close();
}


void display()
{
	fstream f;
	student s;
	int id_num;
	f.open("studentlist.dat",ios::app|ios::binary);
	f.read((char*) &s , sizeof(s));
	cout<<"ent the id u want to print its details:==";
	cin>>id_num;
	if(id_num==s.id)
{
		cout<<"id of student is:="<<s.id<<endl;
	cout<<"student name is:="<<s.studentname<<endl;
	cout<<"student branch is:="<<s.branch<<endl;
	cout<<"student location is:="<<s.location<<endl;

}

	else
{

	cout<<"id is not available.."<<endl;
}
	f.close();
	
}
};

int main()
{

	student a;
	char ch='n';
	do
{
	a.addrecord();
	cout<<"want to add more?(y/n)"<<endl;
	cin>>ch;
}

	while(ch=='y'||ch=='Y');
	cout<<"updated.."<<endl;


a.display();
return 0;
}
