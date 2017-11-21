#include <hash_map>
using namespace __gnu_cxx;

#include<string>
#include <iostream>
using namespace std;

int main(){
	hash_map<string, string> mymap;
	mymap.insert(pair<string,string>("hcq", "20"));
	mymap["sgx"]="24";
	mymap["sb"]="23";
	return 1;
}
