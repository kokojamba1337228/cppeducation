#include <iostream>
#include <vector>

unsigned long long fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int factorial(int n) {
	int result = 1;
	for (size_t i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

template <typename T>
T maximum(T a, T b) {
	return a > b ? a : b;
}

template <typename S, typename T>


void training() {

	auto a = 10;
	auto b = 'z';
	auto c = "mamamia";
	auto zxc = { 1, 2, 3, 4 };
	std::pair<int, double> mypair;
	std::pair<std::string, double> person("John", 8);
	mypair.first = 1;
	mypair.second = 2.3;
	//std::cout << mypair.first << " " << mypair.second;
	std::cout << person.first << " " << person.second;
	//std::cout << typeid(zxc).name() << " " << typeid(b).name() << " " << typeid(c).name();
	//std::cout << fact(18);
	//class std::initializer_list<int> char char const* __ptr64
}

int main()
{
	//int arr[] = {1,2,3};
	//std::vector<int> vec = { 1,2,3 };
	//auto z = vec;
	//std::vector<std::string> vec1 = { "1","2","3" };
	//for (size_t i = 0; i < vec.size(); i++)
	//{
	//	std::cout << vec[i] << " ";
	//}
	std::cout << fact(5);
	//int x = 5, y = 10;
	//double x1 = 10, y1 = 5;
	//char c1 = 'a', c2 = 'b';
	//std::cout << maximum(x, y) << " " << maximum(x1, y1) << " " << maximum(c1, c2);
}
