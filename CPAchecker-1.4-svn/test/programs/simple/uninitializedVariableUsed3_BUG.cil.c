/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 1 "test.c"
int f(void) 
{ int ret ;

  {
#line 3
  return (ret);
}
}
#line 6 "test.c"
int main(void) 
{ int x ;
  int tmp ;
  int y ;
  int tmp___0 ;

  {
  {
#line 7
  tmp = f();
#line 7
  x = tmp;
#line 8
  tmp___0 = f();
#line 8
  y = tmp___0;
  }
#line 10
  if (x != y) {
    ERROR: 
    goto ERROR;
  } else {

  }
#line 14
  return (0);
}
}