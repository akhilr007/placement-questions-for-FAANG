//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortAnArray(vector<int> &v, int n)
{
	// the naive solution will be to sort an array which will be going to take O(nlogn) time complexity and O(1)
	// space complexity


	// the optimised solution will be to counting sort the array and count the no of 0's , 1's , 2,s
	// and print the 0 1 and 2 to the respective count times
	// it will take O(n) for count + O(n) to print hence O(2n)

	//the most optimal way is to use dutch national flag algorithm since it is a variation of that problem

	int low = 0;
	int high = n-1;
	int mid = 0;

	while(mid <= high)
	{
		switch(v[mid])
		{
			// if the element is 0
			// swap the element at low and mid index
			// increment both the low and mid
			case 0:
				swap(v[low++], v[mid++]);
				break;

			// if the element is 1 just increment the mid index
			case 1:
				mid++;
				break;

			// if the element is 2
			// swap the element at mid and high index
			// decrement the high index
			case 2:
				swap(v[mid], v[high--]);
				break;
				
		}
	}

	return v;
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
        
        v = sortAnArray(v, n);
		for(int i = 0; i < n; i++)
		{
		    cout << v[i] << " ";
		}
		
		cout << endl;
	}

	return 0;
}