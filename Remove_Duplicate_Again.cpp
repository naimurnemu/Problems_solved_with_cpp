#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> num_list;
  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
      break;
    num_list.push_back(value);
  }

  num_list.sort();
  num_list.unique();
  
  for(int elem: num_list) {
    cout << elem << " ";
  }

  return 0;
}
