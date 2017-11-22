#include <unistd.h>
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

	int j = 1;
	while(true){
		it = map.find(j);
		cout << it->second << endl;
		//sleep(1);
		cout << j << endl;
		j++;
		cout << "" << endl;
		sleep(1);
	}

	/*if((it = map.find(100000)) != map.end()){
		cout << it->second << endl;
	} */
	return 0;
}
