void my_swap(int *a, int *b)
{
  int i; // je créé une variable
   i = *a; // je transfere la valeur de l'dresse a dans la variable i 
  *a = *b; // je dis que la valeur de l'adresse du pointeur a = à la valeur de l'adresse du pointeur b
  *b = i; //je dis que la valeur de l'adresse du pointeur b = la valeur de l'adresse du pointeur a qui était transféré dans la variable i 
}
