#include <iostream>
using namespace std;
typedef char ALIGN[16];
union header {
	struct {
		size_t size;
		unsigned is_free;
		union header *next;
	} s;
	ALIGN stub;
};
typedef union header header_t;
int main()
{
  cout <<sizeof(header_t)<<endl;
  return 0;
}