#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string> str_list;
  string value;
  while (cin >> value && value != "end")
  {
    str_list.push_back(value);
  }

  int times;
  cin >> times;
  auto current = str_list.begin();

  for (int i = 0; i < times; ++i)
  {
    string type, item;
    cin >> type;

    if (type == "visit")
    {
      cin >> item;
      bool found = false;
      auto it = str_list.begin();

      while (it != str_list.end())
      {
        if (*it == item)
        {
          found = true;
          current = it;
          break;
        }
        ++it;
      }

      found ? cout << item << endl : cout << "Not Available" << endl;
    }
    else if (type == "prev")
    {
      if (current == str_list.begin())
      {
        cout << "Not Available" << endl;
      }
      else
      {
        --current;
        cout << *current << endl;
      }
    }
    else if (type == "next")
    {
      auto next = current;
      ++next;

      if (next == str_list.end())
      {
        cout << "Not Available" << endl;
      }
      else
      {
        current = next;
        cout << *current << endl;
      }
    }
  }

  return 0;
}
