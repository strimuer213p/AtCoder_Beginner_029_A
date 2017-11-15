/*
問題文
英小文字からなる文字列 W が入力されます。
W の末尾に英小文字の s を付け足したものを出力してください。
*/

#include<iostream>
#include<string>

int main() {
	std::string str;

	std::cin >> str;

	str += 's';

	std::cout << str << std::endl;

	return 0;
}