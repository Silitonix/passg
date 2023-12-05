#include <iostream>
#include <math.h>

namespace Hash
{
  using namespace std;

  string alephbet = "qwertyuiopasdfghjklzxcvbnm";
  string ALEPHBET = "ZXCVBNMASDFGHJKLQWERTYUIOP";
  string  numbers = "0123456789";
  string    signs = "~!@#$%^&*_+=-./<>?";
  string randomSource = "9$wK+w:M``co86-p(N(AF0g8wkP5c)89NGhmblh5&/nT!7pi#p4%zM(pfo(^b/aJnj6/,MyqU<o%7y<&8+YMOa>:Jx%o`:J3,@bhX,f,dy@NROhxHSupD:)alH(*RfAMOG5Fo8xqWM8y67>LA3T,L5+aJ!RJaXbYWq&M@QMeia)6fDbWl|kV|'Od$pH*$|?~gZo4)jH15btd3.?Dln@^:0,6-`B4wIV,dFKMp<C;u0*Xtaq0z.4wOq;)8ln43Y<U:!8rF:i^A`Zbl~I/>4'amYcR0I32P'^vg:Xw4b2rTv+3/~EAt@O':pCGePp;;BE-sS9RSg0f,ApXVHCJe,?_!HduShk5LWb5jIQXHBxmnpO*e@@`+#m?2/e~%h|2+0^55TNzijVBfi#Ct=Ae5f=qCx%:edOw^:9y8zp~VvAd68/GPx9jX(=EvngvS&5590_m%_T(ztHC#7/IbwLrRF?oHBDCktF(G&&QcNqAG@~,gGU4d<IT@#Ng?Y$mc4dlm&e&";

  string generate(const string& text, int length = 3) {

    string output;

    for (int x = 0; x < length; x++)
    {
      int choice = 0;
      for (int y = 0; y < text.length(); y++)
      {
        for (int z = 0; z < randomSource.length(); z++)
        {
          const int character = (int)text.at((y + x + z) % text.length());
          const int randomChoice = z + (z * character) + character + x + y;
          const int randomChar = randomSource[(randomChoice + x + (x * y)) % randomSource.length()];
          choice += randomChar;
        }
      }
      output += alephbet.at(choice % alephbet.length());
    }

    for (int x = 0; x < length; x++)
    {
      int choice = 0;
      for (int y = 0; y < text.length(); y++)
      {
        for (int z = 0; z < randomSource.length(); z++)
        {
          const int character = (int)text.at((y + x + z) % text.length());
          const int randomChoice = z + (z * character) + character + x + y;
          const int randomChar = randomSource[(randomChoice + x + (x * y)) % randomSource.length()];
          choice += randomChar;
          choice %= 0xffffff;
        }
      }
      output += ALEPHBET.at(choice % ALEPHBET.length());
    }

    for (int x = 0; x < length; x++)
    {
      int choice = 0;
      for (int y = 0; y < text.length(); y++)
      {
        for (int z = 0; z < randomSource.length(); z++)
        {
          const int character = (int)text.at((y + x + z) % text.length());
          const int randomChoice = z + (z * character) + character + x + y;
          const int randomChar = randomSource[(randomChoice + x + (x * y)) % randomSource.length()];
          choice += randomChar;
          choice %= 0xffffff;
        }
      }
      output += numbers.at(choice % numbers.length());
    }

    for (int x = 0; x < length; x++)
    {
      int choice = 0;
      for (int y = 0; y < text.length(); y++)
      {
        for (int z = 0; z < randomSource.length(); z++)
        {
          const int character = (int)text.at((y + x + z) % text.length());
          const int randomChoice = z + (z * character) + character + x + y;
          const int randomChar = randomSource[(randomChoice + x + (x * y)) % randomSource.length()];
          choice += randomChar;
          choice %= 0xffffff;
        }
      }
      output += signs.at(choice % signs.length());
    }

    return output;
  }
}

