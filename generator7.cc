#include <iostream>
#include <cstdlib> // for atoi
using namespace std;
int main(int argc, char* argv[])
{
if (argc != 2) // remember, argv[0] is the program name
{
cerr << "Wrong number of arguments!" << endl;
return 1;
}
int n = atoi(argv[1]);
for(int i = 1; i <= n/4; i++) {
	cout << "I " << i << endl;
}
for(int j = 1; j <= n/4; j++) {
	cout << "F " << j << endl; 
}
for(int k = 1; k <= n/4; k++){
	if (k%2 == 0)
		cout<< "R " << k << endl;
}
for(int x = 1; x <=n/4; x++){
	cout<< "F " << x << endl;
}
return 0;
}