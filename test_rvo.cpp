#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
 
struct C {
  C() {}
  C(const C&) { std::cout << "A copy was made.\n"; }
};
 
C f() {
  return C();
}
 
string print_current_time()
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(buffer, sizeof(buffer), "%Y%m%d%H%M%S", timeinfo);

	printf("buffer addr=0x%p\n", buffer);
	return string(buffer);
}

int main() {
  std::cout << "Hello World!\n";
  C obj = f();

  string str = print_current_time();
  
  printf("str addr=0x%p\n", str.c_str());
  std::cout << str <<"\n";
}
