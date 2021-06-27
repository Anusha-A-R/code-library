#include <bits/stdc++.h>
using namespace std;


int sortK(int arr[], int n, int k)
{
	

	int size;
	size=(n==k)?k:k+1;
	priority_queue<int, vector<int>, greater<int> > pq(arr, arr +size);

	// i is index for remaining elements in arr[] 
	int index = 0;
	for (int i = k + 1; i < n; i++) {
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}

	while (pq.empty() == false) {
		arr[index++] = pq.top();
		pq.pop();
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int k ;
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
	
	sortK(arr, n, k);

	cout << " sorted array" << endl;
	printArray(arr, n);

	return 0;
}
// every element is k away from its target position like after sorting it will be within k positions
// O(n logk) time.