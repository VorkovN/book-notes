#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <list>

//namespace mySpace
//{
//	const std::string name = "Nikita";
//	const std::string surname = "Vorkov";
//	typedef std::vector<char> string;
//}
//using namespace mySpace;
////using namespace std;

//std::map<const std::string, int> m = {{ "1", 0 }, { "2", 3 }, { "2", 1 }, { "2", 1 }, };
//
//void print(const std::pair<std::string, int>& p)
//{
//	std::cout << p.first << " " << p.second << std::endl;
//}
//
//bool check(const std::pair<std::string, int>& p)
//{
//	return p.second > 2;
//}
//namespace
//{
//	int i;
//}

int main()
{

//	std::map<char, int> dic = {{'c', 1}, {'x', 2}};
//	//std::cout << dic['p'];
//	std::map<char, int> dic2;
//	std::list<int> l1 = {1,2,3};
//	std::list<int> l2 = {4};
//	std::copy(l1.begin(), l1.end(), std::back_inserter(l2));
//	std::ostream_iterator<std::string> oi(std::cout);
//	//std::ostreambuf_iterator oi(std::cout);

//	//*oi = std::cerr;
//	*oi = "2";
//	++oi;
//	*oi = "4";
//	*oi = "3";

//	char c = 'a';
//	std::string s = "a";
//	std::cout << (c == s[0]);
//	name;
//	string;

//	std::for_each(m.begin(), m.end(), print);
//	std::cout << std::find_if(m.begin(), m.end(), check)->first << std::endl;//mem_fun

//	{
//		int i;
//		&i;
//		std::cout << i << std::endl;
//	}
//		std::cout << &i << std::endl;



//	&i;
////	std::cout << &i;
//	std::cout << i;

//	int m[100];
//
//	for(int j: m)
//		std::cout << j;

//	for (int i = 0; i < 10000000; i++) very fun
//		std::cout << "\a\n";

	int i1 = 0;
	int i2 = 1;

	int& i = i1;
	i = i2;
	return 0;
}
