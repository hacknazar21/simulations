#include "connections.hpp"

static const int N = 10000;

int main()
{
	int i, j, p, q, id[N], sz[N];
	for (i = 0; i < N; i++)  //0, 1, 2, ... N - 1
	{ 	
		id[i] = i; 
		sz[i] = 1;
	}
	while(std::cin >> p >> q) 
	{
	    for (i = p; i != id[i]; i = id[i]);
	    for (j = q; j != id[j]; j = id[j]);	    
	    if (i == j)
	    { 
	    	std::cout << "Connected!" << "\n";
	    	continue;
	    }
	    if (sz[i] < sz[j])
	    {
	    	id[i] = j; 
	    	sz[j] += sz[i];
	    }
	    else
	    {
	    	id[j] = i; 
	    	sz[i] += sz[j];
	    }
		std::cout << " " << p << " " << q << "\n";
	}
	return 0;
}


/*
	    int t = id[p];

	    if (t == id[q])
	    { 
	    	std::cout << "Connected!" << "\n";
	    	continue;
	    }
	    for (int i = 0; i < N; ++i)
	    {
		   if (id[i] == t) id[i] = id[q];
	    }
		std::cout << " " << p << " " << q << "\n";
*/