#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	for (auto env: {"USER", "SHELL", "HOME"})
{
		cout << getenv(env)<<endl;
}

}
