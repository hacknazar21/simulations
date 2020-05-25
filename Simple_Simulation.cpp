#include "connections.hpp"

static const int N = 10000;

int main()
{
	int i, p, q, id[N];
	for (int i = 0; i < N; i++) id[i] = i;
	while(std::cin >> p >> q) 
	{
	    int t = id[p];
	    if (t == id[q]) continue;
	    for (int i = 0; i < N; ++i)
		   if (id[i] == t) id[i] = id[q];
		std::cout << " " << p << " " << q << "\n";
	}
	return 0;
}