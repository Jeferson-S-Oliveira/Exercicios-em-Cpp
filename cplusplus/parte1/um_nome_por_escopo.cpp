// Esse código dá erro porque uma variável é declarada duas vezes no mesmo escopo

int some_function ()
{
  int x;
  x = 0;
  double x;   // wrong: name already used in this scope
  x = 0.0;

return 0;

}
