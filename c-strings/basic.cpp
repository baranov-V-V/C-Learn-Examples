//#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void strcat(char* dst, const char* src) {
  size_t tmp_end = 0;
  while (dst[tmp_end] != '\0') {
    ++tmp_end;
  }
  
  for (size_t curr_src_pos = 0; src[curr_src_pos] != '\0'; ++curr_src_pos) {
    dst[tmp_end] = src[curr_src_pos];
    ++tmp_end;
  }
  
  dst[tmp_end] = '\0';
}

//sprintf       
//[a][b][b][a][b][o][o][\0][][][] = dst char[10]
//                       ^ = tmp_end
//[b][o][o][\0] = src char[4]
//          ^ = curr_src_pos
//strcat(dst, src)
//array of [n] elems - different type for each n

int main(int argc, char const *argv[]) {
  //char a[10];
  //char b[12];
  //const int a = 3;
  //a = 4;
  int a;
  const char* const str = "hello world!"; //implicit 13-byte string //100 - explicit
  printf("%s\n", str);

  char res[10];

  sprintf(res, "5 + %d + %s", 6, str);
  //str[2] = 'y';
  //str = "boo";
  //*(2 + str) = 'y';

  printf("%s\n", res);

  return 0;
}







void foo(char* str, size_t pos) {
  str[pos] = 'a';
  /*
  
  
  code
  
  
  */
}
