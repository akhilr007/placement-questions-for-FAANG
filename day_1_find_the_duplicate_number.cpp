// day 1
// find the duplicate in an array of n+1 integers

#include <iostream>
#include <vector>

using namespace std;

int printDuplicate(vector<int> v, int n)
{	
	// initialise fast and slow at the starting of the array
	int slow = v[0];
	int fast = v[0];

	// while we will be incrementing the slow pointer one step at a time 
	// and fast pointer two step at a time simultaneously

	do
	 {
	 	slow = v[slow];
	 	fast = v[v[fast]];

	 } while (slow != fast); 

	 // if the slow and fast pointer coincides then we will intialise fast pointer againt to the starting index

	 // but this time we will incrementing both the slow and fast pointer one step at a time

	 while(slow != fast)
	 {
	 	slow = v[slow];
	 	fast = v[fast];
	 }

	 // here if slow and fast coincides then we have detected the repeated element hence return any of the slow or fast pointer

	 return slow;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> v;

		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}

		cout << printDuplicate(v, n) << endl;
	}

	return 0;
}

