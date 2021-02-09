int my_putstr(char const *str)
{
  int i; // je créé une variable i
  i = 0; // je la met à 0 

  while (str[i] != '\0'){ // je lui dis d'etre dans une boucle en mode je peux mettre autant des index que je souhaite
      my_putchar(str[i]); // j'affiche mon résultat
      i = i + 1; // je lui fait prendre un + 1 à chaque fois 
    }
  return (0);
}
