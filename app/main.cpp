#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(int argc, char **argv){
	unordered_map<int, std::string> map;
	for(int i = 1; i <= 10000000; i++){
		map.insert(make_pair(i, "ssdd"));
	}
	unordered_map<int, std::string>::iterator it;

	it = map.find(2222);
	it->second = "alvinxlliu";
	cout << it->second << endl;
	
	/*if((it = map.find(100000)) != map.end()){
		cout << it->second << endl;
	} */
	return 0;
}
