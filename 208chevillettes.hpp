/*
** 208chevillettes.hpp for 208chevillettes in /home/mathon_j/rendu/208chevillettes
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Thu May 28 15:46:25 2015 Jérémy MATHON
** Last update Fri May 29 18:50:22 2015 Jérémy MATHON
*/

#ifndef __208CHEVILLETTES_HPP_
# define __208CHEVILLETTES_HPP_

#include	<iostream>
#include	<string>
#include	<vector>
#include	<cstdlib>
#include	<cstdio>
#include	<cstring>
#include	<cmath>

#define	EFF_MIN	10

#define USAGE "Bad parameters : verif number of parameters\nPlease use \"./208chevillettes [ob0] [ob1] [ob2] [ob3] [ob4] [ob5] [ob6] [ob7] [ob8]\"\n"

#define USAGE_NEG "Bad parameters : no NEGATIF paramater\nPlease use \"./208chevillettes [ob0] [ob1] [ob2] [ob3] [ob4] [ob5] [ob6] [ob7] [ob8]\"\n"

#define USAGE_MAX "Bad parameters : the sum of all parameters must be equal to 100."

typedef struct	s_donnees
{
  int		lvl;
  double	nb[14];
}		t_donnees;

extern t_donnees donnees[];

typedef struct	s_result
{
  char		*name;
  double	val_Ox;
  double	val_Tx;
}		t_result;

class	Calcul
{
public:
  std::vector<double> _var;
  std::vector<double> _var2;
  std::vector<double> _obs;
  std::vector<double> _theo;

  Calcul() {};
  ~Calcul() {};
};

void	main_loop(Calcul *);
double	calcul_p(std::vector<double>);
int	init_var(Calcul *, char **);
void	loi_binomiale(double, Calcul *);
int	verif_val(std::vector<double>, std::vector<double>, t_result res[9]);
double	calc_x2(t_result rest[9], double);
void	printresult(t_result rest[9], double);
double	minimum(double, double);
void	print_var(Calcul *);

#endif /* !__208CHEVILLETTES_HPP_ */
