#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<int,int> mp;
// Declaring unordered map of type<int,int> in which a key of int type is
// mapped to int value

mp.insert({1,2});//(insert) 1 as key mapped to 2
mp.insert({2,3});//(insert) 2 as key mapped to 3
mp.insert({3,4});//(insert) 3 as key mapped to 4

mp.insert(make_pair(4,7));//another way for insertion

mp[1]=2;//another way to map a key to value.

//for finding a value in unordered map (O(1) on average)
if(mp.find(1)!=mp.end())
{
    cout<<"Present";
}
cout<<mp.begin()->first;//return a pointer to first element in unordered map


//mp.end()//return a pointer to container (after the last element) in unordered map

cout<<"\n";
for(auto i = mp.begin();i!=mp.end();i++)
{
    cout<<i->first<<" "<<i->second<<"\n";
}
//iterating values of unordered_map
}
