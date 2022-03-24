// CPP Program to implement Deque in STL
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

void subset(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it << *it++ << *it++;
	cout << '\n';
}

int main()
{
	deque<int> gquiz;
	deque<int> ss;
	gquiz.push_back(23);
	gquiz.push_front(7);
	gquiz.push_back(7);
	gquiz.push_front(5);
	gquiz.push_back(1);
	gquiz.push_front(2);
	gquiz.push_front(3);
	cout << "The deque gquiz is : ";
	showdq(gquiz);
/*
	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.max_size() : " << gquiz.max_size();

	cout << "\ngquiz.at(2) : " << gquiz.at(2);
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop_front() : ";
	gquiz.pop_front();
	showdq(gquiz);

	cout << "\ngquiz.pop_back() : ";
	gquiz.pop_back();
	showdq(gquiz);
*/

cout<<"\nsubsets:==";
	ss.push_back(23);
	ss.push_front(7);
	ss.push_back(7);
	ss.push_front(5);
	ss.push_back(1);
	ss.push_front(2);
	ss.push_front(3);
subset(ss);
	return 0;
}

