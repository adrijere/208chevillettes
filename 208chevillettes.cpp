/*
** 208chevillettes.cpp for 208chevillettes in /home/mathon_j/rendu/208chevillettes
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Fri May 29 15:48:53 2015 Jérémy MATHON
** Last update Fri May 29 18:50:05 2015 Jérémy MATHON
*/

#include	<math.h>
#include	"gmpxx.h"
#include	"208chevillettes.hpp"

void	print_var(Calcul *calc)
{
  for(int j = 0; j != calc->_var.size(); j++)
    {
      std::cout << "Var[" << j << "] : " << calc->_var[j] << std::endl;
    }
  std::cout << " ------------------" << std::endl;
  for(int j = 0; j != calc->_var2.size(); j++)
    {
      std::cout << "Var2[" << j << "] : " << calc->_var2[j] << std::endl;
    }
}

mpz_class	coeff_binomial(double n, double k)
{
  mpz_t b, tmp, tmp2, tmp3, i, k_, n_;
  double k2, i2 = 0;

  mpz_init_set_d(b, 1);
  mpz_init_set_d(i, 1);
  mpz_init_set_d(n_, n);
  mpz_init_set_d(tmp, 1);
  mpz_init_set_d(tmp2, 1);
  mpz_init_set_d(tmp3, 1);

  if ((k < 0) || (k > n))
    mpz_set_d(b, 0);
  else{
    k2 = minimum(k, (n - k));
    mpz_init_set_d(k_, k2);
    i2 = 1;
    while (i2 <= k2)
      {
	mpz_sub(tmp, n_, i);
	mpz_add_ui(tmp2, tmp, 1);
	mpz_mul(tmp3, b, tmp2);
	mpz_div(b, tmp3, i);
	mpz_add_ui(i, i, 1);
	i2++;
      }}
  mpz_class res(b);
  return (res);
}

double	calcul_p(std::vector<double> var)
{
  double	p;

  p = (((0 * var[0]) + (1 * var[1]) + (2 * var[2]) + (3 * var[3]) + (4 * var[4]) + (5 * var[5]) + (6 * var[6]) + (7 * var[7]) +(8 * var[8])) / 10000);
  return (p);
}

void		loi_binomiale(double p, Calcul *calc)
{
  double	n = 100;
  double	k = 0;
  double	res = 0;
  double	tmp;

  while (k <= 50)
    {
      tmp = (coeff_binomial(n, k).get_d());
      tmp = (tmp * (pow(p, k)) * (pow((1 - p), (n - k))));
      if (k == 0)
	calc->_var2[0] = tmp;
      if (k == 1)
	calc->_var2[1] = tmp;
      if (k == 2)
	calc->_var2[2] = tmp;
      if (k == 3)
	calc->_var2[3] = tmp;
      if (k == 4)
	calc->_var2[4] = tmp;
      if (k == 5)
	calc->_var2[5] = tmp;
      if (k == 6)
	calc->_var2[6] = tmp;
      if (k == 7)
	calc->_var2[7] = tmp;
      if (k > 7)
	calc->_var2[8] = tmp;
      res += tmp;
      k++;
    }
}

double	minimum(double a, double b)
{
  return ((a <= b) ? a : b);
}
