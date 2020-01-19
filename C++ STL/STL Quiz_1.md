<h1>Quiz Time !!! </h1>
<img width="90" height="90" align="left" src="https://img.icons8.com/color/144/000000/c-plus-plus-logo.png">
<img width="90" height="90" align="left" src="https://img.icons8.com/clouds/100/000000/for-experienced.png">
<img width="90" height="90" src="https://img.icons8.com/cute-clipart/256/000000/idea.png">

<br>

### This is a quick STL quiz to revise the concepts 

<b>Q1. STL Definition: What is the Standard Template Library? </b>

- [ ] Set of C++ template classes to provide common programming data structures and functions

- [ ] Set of C++ classes

- [ ] Set of Template functions used for easy data structures implementation

- [ ] Set of Template data structures only

<b>Q2. STL containers: What are the containers? </b>

- [ ] Containers contain set of Iterators

- [ ] Containers stores all the algorithms

- [ ] Containers contain overloaded functions

- [ ] Containers store objects and data

 <b>Q3. STL vector: What will be the output of the following C++ code?</b>

```
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
        vector<int> myvector;
        myvector.push_back(10);
        myvector.push_back(20);
        myvector.front() += myvector.back();
        cout << myvector.front() << endl;;
        return 0;
}
```

- [ ] 10

- [ ] 20

- [ ] 30

- [ ] 40

<b>Q4. stl sort: What will be the output of following code?</b>
```
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[10]= { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    sort(a, a+5, greater<int>());
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
```

- [ ] 0 1 2 3 4 5 6 7 8 9

- [ ] 9 8 7 6 5 4 3 2 1 0

- [ ] 1 5 6 8 9 7 3 4 2 0

- [ ] 9 8 6 5 1 7 3 4 2 0

<b>Q5. stl lower_bound: What will be the output of the following C++ code?</b>
```
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = { 4, 5, 1, 0, 1 };
    sort( arr, arr+5 );
    cout<< lower_bound( arr, arr+5, 3 ) - arr <<endl;
    return 0;
}
```
- [ ] 4

- [ ] 3

- [ ] 2

- [ ] 1

<b>Q6. stl upper_bound: What will be the output of the following C++ code?</b>
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={20, 40, 30, 10 , 50, 30};
    sort(v.begin(), v.end());
    cout<<upper_bound(v.begin(), v.end(), 30)-v.begin();
    return 0;
}
```

- [ ] 3

- [ ] 4

- [ ] 5

- [ ] 6

<b>Q7. stl lower_bound in set: What will be the output of the following C++ code?</b>
```
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(12);
    s.insert(10);
    auto it = s.lower_bound(15);
    cout<< *it <<endl;
    return 0;
}
```

- [ ] 15

- [ ] 5

- [ ] 6

- [ ] Any garbage valu

<b>Q8. stl priority_queue push top: What are the time complexities of priority_queue::top() and priority_queue::push() respectively in C++ STL?
N : size of the priority_queue</b>

- [ ] O(N) and O(N)

- [ ] log(N) and log(N)

- [ ] log(N) and O(1)

- [ ] O(1) and log(N)

<b>Q9. stl priority_queue without comparator: What will be the output of following C++ code?</b>
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int> >q;
    q.push( {1, 5} );
    q.push( {4, 2} );
    q.push( {5, 3} );
    q.push({2, 4});
    q.push({3, 1});
    q.push({5, 2});
    cout<<q.top().first<<" "<<q.top().second<<endl;
    return 0;
}
```

- [ ] 5 3

- [ ] 5 2

- [ ] 1 5

- [ ] 3 1

<b>Q10. stl priority_queue pair min heap: What will be the output of following C++ code?</b>
```
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
int main()
{
    priority_queue<pi , vector<pi>, greater<pi> >q;
    q.push({1, 5});
    q.push({5, 3});
    q.push({3, 1});
    q.push({5, 2});
    q.push({1, 10});
    cout<<q.top().first<<" "<<q.top().second<<endl;
    return 0;
}
```
- [ ] 1 10

- [ ] 1 5

- [ ] 5 3

- [ ] 5 2

<b>Q11. stl priority_queue user defined comparator: What will be the output of following C++ code?</b>
```
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
struct Compare
{
    bool operator()(pi const & a, pi const & b)
    {
         if(a.second < b.second)
         {
            return true;
         }
         else if(a.second > b.second)
         {
             return false;
         }
         else
         {
             if(a.first > b.first)
             {
                 return true;
             }
             return false;
         }
    }
};
int main()
{
    priority_queue<pi , vector<pi>, Compare>q;
    q.push({1, 5});
    q.push({5, 15});
    q.push({7, 15});
    q.push({10, 2});
    q.push({1, 10});
    cout<<q.top().first<<" "<<q.top().second<<endl;
    return 0;
}
```

- [ ] 1 10

- [ ] 7 15

- [ ] 5 15

- [ ] 10 2

<b>Q12. stl stack top push: What are the time complexities of stack::top() and stack::push() in C++ STL?
N : size of the stack</b>

- [ ] O(N) and O(N)

- [ ] log(N) and log(N)

- [ ] - [ ] O(1) and O(1)

- [ ] O(1) and log(N)

<b>Q13. stl map implementation: Internally std::map and std::unordered_map respectively are implemented using</b>

- [ ] Self Balancing BST and Hash Table

- [ ] Hash Table and Self Balancing BST

- [ ] Self Balancing BST and Self Balancing BST

- [ ] Hash Table and Hash Table

<b>Q14. stl iterators: What are the iterators in C++ STL?</b>

- [ ] Iterators are used to iterate over C-like arrays

- [ ] Iterators are used to point memory addresses of STL containers

- [ ] Iterators are used to iterate over pointers

- [ ] Iterators are used to iterate over functions


 <b>Q15. stl multimap: What will be the output of following C++ code?</b>
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int>mp;
    mp.insert({1, 10});
    mp.insert({2, 10});
    mp.insert({1, 5});
    mp.insert({2, 10});
    mp.insert({3, 7});
    cout<<mp.size()<<endl;
    return 0;
}
```

- [ ] 5

- [ ] 4

- [ ] 3

- [ ] 2
