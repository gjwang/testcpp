#include <iostream>
#include <vector>

int main() {
  using namespace std;
  cout << vector<int>().capacity() << "," << vector<int>(10).capacity() << endl;
  return 0;
}
