#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> num_list;
  int times;
  cin >> times;
  for (int i = 0; i < times; i++)
  {
    int type, input;
    cin >> type >> input;
    if (type == 0)
    {
      num_list.push_front(input);
    }
    if (type == 1)
    {
      num_list.push_back(input);
    }
    if (type == 2)
    {
      int list_size = num_list.size();
      if (input < list_size)
      {

        auto it = num_list.begin();
        int count = 0;
        while (count < input)
        {
          it++;
          count++;
        }
        num_list.erase(it);
      }
    }

    cout << "L -> ";
    for (int num : num_list)
    {
      cout << num << " ";
    }
    cout << endl;

    list<int> copy_list(num_list);
    copy_list.reverse();
    cout << "R -> ";
    for (int num : copy_list)
    {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
