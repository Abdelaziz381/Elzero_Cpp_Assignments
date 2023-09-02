#include <iostream>
using namespace std;

int num = 100;

int read()
{
  int num = 50;
  return 0;
}

int play()
{
  
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  cout << num;
  return 0;
}