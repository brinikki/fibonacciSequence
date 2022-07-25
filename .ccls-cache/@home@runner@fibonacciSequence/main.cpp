#include <iostream>
using namespace std;

int main()
{

  int i;
  int seq;

  int n1 = 1;
  int n2 = 1;
  int n3;

  cout << endl;
  cout << "How many numbers do you want displayed in the Fibonacci sequence? ";
  cin >> seq;

  cout << endl;
  cout << "The Fibonacci sequence is: " << endl;
  cout << n1 << "  " << n2 << "  ";

  for (i = 2; i < seq ; i++)
  {

    if (i < seq)
    {
      n3 = n1 + n2;
      cout << n3 << "  ";
      n1 = n2;
      n2 = n3;
    }

  }
 
  return 0;
}
