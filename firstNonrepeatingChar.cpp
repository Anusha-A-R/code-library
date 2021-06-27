#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

/* The function returns index of the first
non-repeating character in a string. If
all characters are repeating then
reurns INT_MAX */
int firstNonRepeating(char* str)
{
	pair<int, int> arr[NO_OF_CHARS];

	for (int i = 0; str[i]; i++) {
		(arr[str[i]].first)++;//first has count
		arr[str[i]].second = i;//second has index
	}

	int res = INT_MAX;
	for (int i = 0; i < NO_OF_CHARS; i++)

		if (arr[i].first == 1)
			res = min(res, arr[i].second);

	return res;
}

int main()
{
	char str[];
    cin>>str;
	int index = firstNonRepeating(str);
	if (index == INT_MAX)
		printf("Either all characters are "
			"repeating or string is empty");
	else
		printf("First non-repeating character"
			" is %c",
			str[index]);
	return 0;
}
