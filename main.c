#include <stdio.h>

#include "bfs.h"
#include "errors.h"
#include "p5test.h"
#include "deb.h"

int main() {
  //debDumpDbn(1, 4);
  //debDumpDir();
  //debDumpInodes();
  //debDumpSuper ();
  bfsInitOFT();
  p5test();
  return 0;
}