#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{

  for (int i = 1; i <= n; i++)
  {
    // space
    for (int j = 0; j < n - i; j++)
    {
      cout << "  ";
    }
  
    // triangle 1
    char ch = 'A';
    for (int j = 0; j <= i - 1; j++)
    {
      cout << ch << " ";
      ch++;
    }
    //   triangle 2;
    ch -= 2;
    for (int j = 0; j < i - 1; j++)
    {
      cout << ch << " ";
      ch--;
    }
    ch++;
    cout << endl;

    // space
  }
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  print(n);

  return 0;
}