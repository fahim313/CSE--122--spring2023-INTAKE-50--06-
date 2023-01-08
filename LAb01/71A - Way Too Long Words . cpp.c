//71A - Way Too Long Words
    #include <iostream>
    #include <string>
     
    using namespace std;
     
    int main() {
      int n;
      string name;
      cin >> n;
     
      for (int i = 0; i < n; i++) {
     
        cin >>name;
     
        int len = name.length();
        if (len > 10) {
          cout << name[0] << len - 2 << name[len - 1] << endl;
        } else {
          cout << name << endl;
        }
      }
     
      return 0;
    }
