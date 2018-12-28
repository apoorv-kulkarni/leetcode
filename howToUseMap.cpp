#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main(){

    unordered_map<int,string > wordMap;
    wordMap.insert({123456,"Visa"});
    wordMap.insert({456789,"MasterCard"});
    wordMap.insert({799456,"Maestro"});
    unordered_map<int,string >::const_iterator iter = wordMap.find(123456);
    if ( iter == wordMap.end() )
        std::cout << "not found";
    else
        std::cout << iter->first << " is " << iter->second ;
    std::cout << endl;

    // unordered_map<int, pair<string,string> > wordMap;
    // wordMap.insert({ 123456, make_pair("Visa", "Credit")});
    // wordMap.insert({ 456789, make_pair("MasterCard", "Credit")});
    // wordMap.insert({ 799456, make_pair("Maestro", "Credit")});
    // unordered_map<int, pair<string,string> >::const_iterator iter = wordMap.find(123456);
    // if ( iter == wordMap.end() )
    //     cout << "not found";
    // else
    //     cout << endl;
    // cout << iter->first << " is " << iter->second.first << ","<< iter->second.second;

    return 0;
}