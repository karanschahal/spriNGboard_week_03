#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  cout << "initially:" << endl;
  cout << "  x = " << x << endl;

  ///////////////////////////////////
  // SET THE APPROPRIATE BITS HERE //
  ///////////////////////////////////

  x = 2693408940;

  cout << "after setting bits:" << endl;
  cout << "  x = " << x << endl;

  ///////////////////////
  // TOGGLE BIT 3 HERE //
  ///////////////////////

  x = x ^ (1 << 3);

  cout << "after first bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

  //////////////////////////////////////
  // REPEAT YOUR PREVIOUS ACTION HERE //
  //////////////////////////////////////

  x = x ^ (1 << 3);

  cout << "after second bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

  //////////////////////
  // CLEAR BIT 7 HERE //
  //////////////////////

  x = x & ~(1 << 7);

  cout << "after clearing bit 7:" << endl;
  cout << "  x = " << x << endl;

  ///////////////////////////
  // CLEAR BITS 16-31 HERE //
  ///////////////////////////

  for (int i = 16; i <= 31; i++){
    x = x & ~(1 << i);
  }

  cout << "after clearing bits 16-31:" << endl;
  cout << "  x = " << x << endl;
}

