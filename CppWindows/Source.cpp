#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//void modify(const string &str) {
//	str += "dsafasd";
//}
int main() {

	/*string str = "ÖÜÆë·É";
	str += "¹þ¹þ";
	cout << str << endl;*/

	vector<string> fruits = { "apple","melon" };
	fruits.push_back("pear");
	fruits.push_back("nut");

	// Iterate over the elements in the vector and print them
	for (auto it = fruits.cbegin(); it != fruits.cend(); it++) {
		cout << *it << endl;
	}
	cout << "Print the elements again using c++11 range-based for loop" << endl;
	cout << "sort" << endl;
	sort(fruits.begin(), fruits.end(), [](string a, string b) {return a > b; });
	for (auto &str : fruits) {
		cout << str << endl;
	}
	system("pause");
	return 0;
}