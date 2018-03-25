/*
* Cracking the Coding Interview Challenges
* Arrays: Left Rotation
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//testcase #8 timeout
vector<int> array_left_rotation(vector<int> a, int n, int k) {
    int i=0, j=0, temp = 0;

	for(j=0;j<k;j++){
		temp = a[0];
		for(i=0;i < n-1;i++){
			a[i] = a[i+1];
		}
			a[i] = temp;
	}

	//for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it) 
	//	cout << "vector a "<< *it << endl;
	//std::cout << '\n';

	//for(i=0;i<n;i++){
	//	cout << "vector a " << a[i]  << "\t" << endl;
	//}

    return a;
}

vector<int> array_left_rotation_1(vector<int> arr, int n, int k)
{
    n = (int)arr.size();
    if(k >= n) 
		k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

	return arr;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
		cout << "input vector[" << a_i << "] : " << endl;
        cin >> a[a_i];
    }

    vector<int> output = array_left_rotation(a, n, k);

    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    
	cout << endl;

	getchar();

	system("pause");

    return 0;
}
