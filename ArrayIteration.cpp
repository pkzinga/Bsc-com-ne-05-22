#include<iostream>
#include<string>

using namespace std;

int main() {
    string StringsElements[] = {"B123","C234","A3450","C15","B177","G3003","C235","B179"};

  for (const auto &str : StringsElements) {
         
         if (str[0] == 'B') {
            cout << str << endl;
         }
  }

  return 0;
}