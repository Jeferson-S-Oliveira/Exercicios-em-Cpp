// Esse código dá erro por causa da declaração local de bar

int foo;        // global variable

int some_function ()
{
  int bar;      // local variable
  bar = 0;
  return 0;
}

int other_function ()
{
  foo = 1;  // ok: foo is a global variable
  bar = 2;  // wrong: bar is not visible from this function

return 0;

}

int main(){

return 0;

}
