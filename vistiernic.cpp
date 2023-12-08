#include <fstream>
using namespace std;
int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	ifstream f("vistiernic.in");
	int n, d2=0, d5=0;
	f >> n;
	while (n > 0)
	{
		int x;
		f >> x;
		while (x%2 == 0) d2++, x/=2;
		while (x%5 == 0) d5++, x/=5;
		n--;
	}
	f.close();
	ofstream g("vistiernic.out");
	g << min(d2, d5);
	g.close();
	return 0;
}

