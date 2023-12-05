#include <iostream>
#include "help.cpp"
#include <string>
#include "hash.cpp"

using namespace std;

int main(int argc, char const* argv[])
{
  if (argc < 2) {
    HELP::WriteMain();
    return 1;
  }

  string username = Hash::generate(argv[1]);
  string passwrod = Hash::generate(username);

  Console::WriteLine();

  Console::Write("Username : ");
  Console::WriteLine(username);

  Console::Write("Password : ");
  Console::WriteLine(passwrod);

  Console::WriteLine();


  return 0;
}