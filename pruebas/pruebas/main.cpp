#include <algorithm>
#include <queue>
//#include <concurrent_priority_queue.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	priority_queue<int> q;
	q.push(1);
	q.push(9);
	q.push(10);
	cout << q.top();
	q.pop();
	cout << endl;
	cout << q.top();
	q.pop();
	cout << endl;
	cout << q.top();
	q.pop();
	cout << endl;
	system("pause");
	return 0;
}