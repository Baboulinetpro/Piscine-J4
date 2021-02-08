int my_strlen(const char* str)
{
  int i; // je créé une variable i
  i = 0; // je la met à 0 

  while (str[i] != '\0') // je lui dis d'etre dans une boucle en mode je peux mettre autant des index que je souhaite
    {
      i++; // je lui fait prendre un + 1 à chaque fois 
    }
  return (i); // retourne le nombre de i
  }
