#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "text_style.h"

using namespace std;
using namespace style;

int main()
{
  char c;
  cout << "Hello World!" << endl << endl;

  cout << bold << "This text is bold using the bold flag." << reset << endl;
  cout << faded << "This text is faded using the fade flag." << reset << endl;
  cout << italic << "This is text is italic using the italic flag." << reset << endl;
  cout << underline << "This text is underlined using the underline flag." << reset << endl;
  cout << blink << "This text is blinking using the blink flag." << reset << endl;
  cout << inv << "This text has inverted foreground and background using the blink flag." << reset << endl;
  cout << hide << "This text is hidden using the hide flag." << reset << endl;
  cout << strike << "This text is striked-through using the strike flag." << reset << endl;
  cout << bold << italic << underline << strike << "Styles can be combined." << reset << "<- bold, italic, underline, strike, inv" << endl;
  cout << bold << inv << "But some may be unexpected result like bold and inv." << reset << "<- bold, inv" << endl;
  cout << inv << bold << "But some may be unexpected result like inv and bold." << reset << "<- inv, bold" << endl;
  cout << inv << "Look at the color." << reset << "<- compare, this is inv only"<< endl;
  cout << bold << "Look at the color" << reset << "<- bold only"<< endl;
  
  cout << fg::black << "This text is black using the " << bold << fg::white << "fg::black" << " flag." << reset << endl;
  cout << fg::red << "This text is red using the " << bold << fg::white << "fg::red" << " flag." << reset << endl;
  cout << fg::green << "This text is green using the " << bold << fg::white << "fg::green" << " flag." << reset << endl;
  cout << fg::yellow << "This text is yellow using the " << bold << fg::white << "fg::yellow" << " flag." << reset << endl;
  cout << fg::blue << "This text is blue using the " << bold << fg::white << "fg::blue" << " flag." << reset << endl;
  cout << fg::magenta << "This text is magenta using the " << bold << fg::white << "fg::magenta" << " flag." << reset << endl;
  cout << fg::cyan << "This text is cyan using the " << bold << fg::white << "fg::cyan" << " flag." << reset << endl;
  cout << fg::white << "This text's background is white using the " << bold << fg::white << "fg::white" << " flag." << reset << endl;
  cout << bg::black << "This text's background is black using the " << bold << bg::white << "bg::black" << " flag." << reset << endl;
  cout << bg::red << "This text's background is red using the " << bold << bg::white << "bg::red" << " flag." << reset << endl;
  cout << bg::green << "This text's background is green using the " << bold << bg::white << "bg::green" << " flag." << reset << endl;
  cout << bg::yellow << "This text's background is yellow using the " << bold << bg::white << "bg::yellow" << " flag." << reset << endl;
  cout << bg::blue << "This text's background is blue using the " << bold << bg::white << "bg::blue" << " flag." << reset << endl;
  cout << bg::magenta << "This text's background is magenta using the " << bold << bg::white << "bg::magenta" << " flag." << reset << endl;
  cout << bg::cyan << "This text's background is cyan using the " << bold << bg::white << "bg::cyan" << " flag." << reset << endl;
  cout << bg::white << "This text's background is white using the " << bold << bg::white << "bg::white" << " flag." << reset << endl;


  cout << fg::black << bg::white << "You can combine fg and bg colors, this is fg::black and bg::white." << reset << endl;
  cout << fg::yellow << bg::green << "You can combine fg and bg colors, this is fg::yellow and bg::green." << reset << endl;
  cout << inv << fg::yellow << bg::green << "And of ofc can be inverted using inv." << reset << endl;

  cin >> c;

  cout << "Press any key to exit";

  return EXIT_SUCCESS;
}
