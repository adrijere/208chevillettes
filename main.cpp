/*
** main.cpp for main in /home/mathon_j/rendu/208chevillettes
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Thu May 28 15:45:26 2015 Jérémy MATHON
** Last update Fri May 29 19:05:35 2015 Jérémy MATHON
*/

#include	"208chevillettes.hpp"

void	main_loop(Calcul *calc)
{
  double	sommeCarre = 0, min, max, p;
  int		deg_lib = 0, i = 0;
  t_result	res[9];
  bool		_end = false;

  p = calcul_p(calc->_var);
  loi_binomiale(p, calc);
  deg_lib = verif_val(calc->_var, calc->_var2, res);
  printresult(res, deg_lib);
  sommeCarre = calc_x2(res, deg_lib);
  printf ("\nloi choisie :\t\t\tB(100, %.4f)\n", p);
  printf ("somme des carrés des écarts :\tX2 = %.3f\n", sommeCarre);
  printf ("degrés de liberté :\t\tv = %d\n", (deg_lib - 2));
  while (i < 14 && !(_end))
    {
      if (sommeCarre > donnees[deg_lib - 2].nb[i])
	i++;
      else
	{
	  _end = true;
	  max = donnees[0].nb[i - 1];
	  min = donnees[0].nb[i];
	}
    }
  printf ("validité de l’ajustement :\t%.0f%% < P < %.0f%%\n", min, max);
}

int	init_var(Calcul *calc, char **av)
{
  int	somme;

  somme = 0;
  for (int j = 0; j != 9; j++)
    {
      if (atof(av[j]) < 0)
	return (1);
      calc->_var.push_back(atof(av[j + 1]));
      somme += atof(av[j + 1]);
    }
  if (somme != 100)
    return (2);
  for (int j = 0; j != 9; j++)
    {
      calc->_var2.push_back(0);
    }
  return (0);
}

int	main(int ac, char **av)
{
  Calcul	calc;
  int		check;

  if (ac != 10)
    {
      std::cout << USAGE << std::endl;
      return (1);
    }
  if ((check = init_var(&calc, av)) != 0)
    { 
      if (check == 2)
	std::cout << USAGE_MAX << std::endl;
      else
	std::cout << USAGE_NEG << std::endl;
      return (1);
    }
  main_loop(&calc);
  return (0);
}

