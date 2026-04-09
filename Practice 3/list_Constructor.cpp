  #include <bits/stdc++.h>
  using namespace std;
  
  int main() {
      list<int>list1={12,34,65,78};

      int a[3]={23,45,75};

      list<int>list2(a, a+3);
      for (auto it=list2.begin(); it!=list2.end(); it++)
      {
        cout << *it << " ";
      }
      
      return 0;
  }