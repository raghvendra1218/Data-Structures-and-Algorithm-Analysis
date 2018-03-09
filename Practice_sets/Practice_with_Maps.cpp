/*
Practice_with_Maps.cpp
08-Mar-2018
Raghvendra Dixit
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	map<string, int> myMap1;
	myMap1["AZzzz"] = 10;
	myMap1["Baaaa"] = 30;
	myMap1["Gita"] = 20;
	myMap1["AAron"] = 5;
	myMap1["aaron"] = 5;
	//Cool thing about map is that it sorts the keys and store in that fashion and when asked for
	//printing it prints them or the associated values in that order.
//	map<char,int> myMap2(myMap1.begin(),myMap1.end());
//	map<char,int> myMap3(myMap2);
	map<string,int>myMap4 = {{"alpha",1},{"beta",2},{"Gamma",3}};
	//Simple way to access the values in map using is through [key] operator
	cout<<"Value at Gamma is: "<<myMap4["Gamma"]<<endl;

	//at member function : To access value in a map using a particular key
	cout<<"value at Alpha is: "<<myMap4.at("alpha")<<endl;
	//value can be overwritten using at member function
	myMap4.at("beta") = 20;
	cout<<"value at Beta is: "<<myMap4.at("beta")<<endl;
	cout<<endl;
//	map<char,int>::iterator it1 = myMap1.begin();
//	advance(it1,2);
//	cout<<it1->first<<": "<<it1->second;
//	auto it2 = myMap2.begin();
//	for(;it1 != myMap1.end();it1++){
//		cout<<it1->first<<",";
//	}
//	cout<<endl;
	auto it1 = myMap1.begin();
	//Clear() :- Removes all the element from the container leaving the container empty.
	for(;it1 != myMap1.end();it1++){
		cout<<it1->first<<",";
	}
//	myMap4.clear();
//	for(;it1 != myMap4.end();it1++){
//		cout<<it1->first<<",";
//	}
	cout<<endl;
	//Count : member function, returns the count of the key , since map can store unique key so the return value of count
	//is either "1" or "0".
	cout<<"Count for key AAron in Map1: "<<myMap1.count("AAron")<<endl;  //1
	cout<<"Count for key Brita in Map1: "<<myMap1.count("Brita")<<endl;  //0
	//To access the Map from end use crbegin and crend member functions
	//Reversing the Map 1
	auto rit1 = myMap1.crbegin();
	for(;rit1 != myMap1.crend(); rit1++){
		cout<<"["<<rit1->first<<" : "<<rit1->second<<"]"<<endl;
	}
	cout<<endl;
	//empty(): returns true if the map is empty else false


return 0;
}
