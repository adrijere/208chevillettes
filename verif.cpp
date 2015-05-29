/*
** verif.cpp for verif in /home/mathon_j/rendu/208chevillettes
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Fri May 29 17:24:04 2015 Jérémy MATHON
** Last update Fri May 29 19:04:21 2015 Jérémy MATHON
*/

#include	"208chevillettes.hpp"

int	verif_val(std::vector<double> var, std::vector<double> var2, t_result res[9])
{
  int	i = 0;

  if (var[0] < EFF_MIN)
    {
      if ((var[0] + var[1]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[0] + var[1] + var[2]);
	  res[i].val_Tx = (var2[0] + var2[1] + var2[2]);
	  res[i].name = strdup("0-2");
	  var[1] = -1;
	  var[2] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[0] + var[1]);
	  res[i].val_Tx = (var2[0] + var2[1]);
	  res[i].name = strdup("0-1");
	  var[1] = -1;
	}
      i++;
    }
  else
    {
      res[i].val_Ox = (var[0]);
      res[i].val_Tx = (var2[0]);
      res[i].name = strdup("0");
      i++;
    }
  if (var[1] != -1 && var[1] < EFF_MIN)
    {
      if ((var[1] + var[2]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[1] + var[2] + var[3]);
	  res[i].val_Tx = (var2[1] + var2[2] + var2[3]);
	  res[i].name = strdup("1-3");
	  var[2] = -1;
	  var[3] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[1] + var[2]);
	  res[i].val_Tx = (var2[1] + var2[2]);
	  res[i].name = strdup("1-2");
	  var[2] = -1;
	}
      i++;
    }
  else if (var[1] != -1)
    {
      res[i].val_Ox = (var[1]);
      res[i].val_Tx = (var2[1]);
      res[i].name = strdup("1");
      i++;
    }
  if (var[2] != -1 && var[2] < EFF_MIN)
    {
      if ((var[2] + var[3]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[2] + var[3] + var[4]);
	  res[i].val_Tx = (var2[2] + var2[3] + var2[4]);
	  res[i].name = strdup("2-4");
	  var[3] = -1;
	  var[4] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[2] + var[3]);
	  res[i].val_Tx = (var2[2] + var2[3]);
	  res[i].name = strdup("2-3");
	  var[3] = -1;
	}
      i++;
    }
  else if (var[2] != -1)
    {
      res[i].val_Ox = (var[2]);
      res[i].val_Tx = (var2[2]);
      res[i].name = strdup("2");
      i++;
    }
  if (var[3] != -1 && var[3] < EFF_MIN)
    {
      if ((var[3] + var[4]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[3] + var[4] + var[5]);
	  res[i].val_Tx = (var2[3] + var2[4] + var2[5]);
	  res[i].name = strdup("3-5");
	  var[4] = -1;
	  var[5] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[3] + var[4]);
	  res[i].val_Tx = (var2[3] + var2[4]);
	  res[i].name = strdup("3-4");
	  var[4] = -1;
	}
      i++;
    }
  else if (var[3] != -1)
    {
      res[i].val_Ox = (var[3]);
      res[i].val_Tx = (var2[3]);
      res[i].name = strdup("3");
      i++;
    }
  if(var[4] != -1 && var[4] < EFF_MIN)
    {
      if ((var[4] + var[5]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[4] + var[5] + var[6]);
	  res[i].val_Tx = (var2[4] + var2[5] + var2[6]);
	  res[i].name = strdup("4-6");
	  var[5] = -1;
	  var[6] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[4] + var[5]);
	  res[i].val_Tx = (var2[4] + var2[5]);
	  res[i].name = strdup("4-5");
	  var[5] = -1;
	}
      i++;
    }
  else if (var[4] != -1)
    {
      res[i].val_Ox = (var[4]);
      res[i].val_Tx = (var2[4]);
      res[i].name = strdup("4");
      i++;
    }
  if (var[5] != -1 && var[5] < EFF_MIN)
    {
      if ((var[5] + var[6]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[5] + var[6] + var[7]);
	  res[i].val_Tx = (var2[5] + var2[6] + var2[7]);
	  res[i].name = strdup("5-7");
	  var[6] = -1;
	  var[7] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[5] + var[6]);
	  res[i].val_Tx = (var2[5] + var2[6]);
	  res[i].name = strdup("5-6");
	  var[6] = -1;
	}
      i++;
    }
  else if (var[5] != -1)
    {
      res[i].val_Ox = (var[5]);
      res[i].val_Tx = (var2[5]);
      res[i].name = strdup("5");
      i++;
    }
  if (var[6] != -1 && var[6] < EFF_MIN)
    {
      if ((var[6] + var[7]) < EFF_MIN)
	{
	  res[i].val_Ox = (var[6] + var[7] + var[8]);
	  res[i].val_Tx = (var2[6] + var2[7] + var2[8]);
	  res[i].name = strdup("6+");
	  var[7] = -1;
	  var[8] = -1;
	}
      else
	{
	  res[i].val_Ox = (var[6] + var[7]);
	  res[i].val_Tx = (var2[6] + var2[7]);
	  res[i].name = strdup("6-7");
	  var[7] = -1;
	}
      i++;
    }
  else if (var[6] != -1)
    {
      res[i].val_Ox = (var[6]);
      res[i].val_Tx = (var2[6]);
      res[i].name = strdup("6");
      i++;
    }
  if (var[7] != -1 && (var[7] < EFF_MIN || var[8] < EFF_MIN))
    {
      if ((var[7] + var[8]))
	{
	  res[i].val_Ox = (var[7] + var[8]);
	  res[i].val_Tx = (var2[7] + var2[8]);
	  res[i].name = strdup("7+");
	  var[8] = -1;
	}
      i++;
    }
  else if (var[7] != -1)
    {
      res[i].val_Ox = (var[7]);
      res[i].val_Tx = (var2[7]);
      res[i].name = strdup("7");
      i++;
      res[i].val_Ox = (var[8]);
      res[i].val_Tx = (var2[8]);
      res[i].name = strdup("8");
      i++;
    }
  return (i);
}

double		calc_x2(t_result res[9], double deg_lib)
{
  double	sommeCarre = 0;
  int		i = 0;

  while (i < deg_lib)
    {
      sommeCarre += (pow((res[i].val_Ox - res[i].val_Tx), 2) / res[i].val_Tx);
      i++;
    }
  return (sommeCarre);
}

void	printresult(t_result res[9], double deg_lib)
{
  int		i = 0;
  double	somme = 0;

  while (i < deg_lib)
    {
      res[i].val_Tx *= 100;
      if (i + 1 != deg_lib)
	somme += res[i].val_Tx;
      i++;
    }
  res[i - 1].val_Tx = 100 - somme;
  if (deg_lib == 7)
    {
      printf ("x\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|total\n",
	      res[0].name, res[1].name, res[2].name, res[3].name, res[4].name,
	      res[5].name, res[6].name);
      printf ("________________________________________________________________________\n");
      printf ("Ox\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%d\n",
	      res[0].val_Ox, res[1].val_Ox, res[2].val_Ox, res[3].val_Ox,
	      res[4].val_Ox, res[5].val_Ox, res[6].val_Ox, 100);
      printf ("Tx\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%d\n",
	      res[0].val_Tx, res[1].val_Tx, res[2].val_Tx, res[3].val_Tx,
	      res[4].val_Tx, res[5].val_Tx, res[6].val_Tx, 100);
    }
  if (deg_lib == 8)
    {
      printf ("x\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|total\n",
	      res[0].name, res[1].name, res[2].name, res[3].name, res[4].name,
	      res[5].name, res[6].name, res[7].name);
      printf ("____________________________________________________________________________________\n");
      printf ("Ox\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%d\n",
	      res[0].val_Ox, res[1].val_Ox, res[2].val_Ox, res[3].val_Ox,
	      res[4].val_Ox, res[5].val_Ox, res[6].val_Ox, res[7].val_Ox, 100);
      printf ("Tx\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%d\n",
	      res[0].val_Tx, res[1].val_Tx, res[2].val_Tx, res[3].val_Tx,
	      res[4].val_Tx, res[5].val_Tx, res[6].val_Tx, res[7].val_Tx, 100);
    }
  if (deg_lib == 9)
    {
      printf ("x\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|total\n",
	      res[0].name, res[1].name, res[2].name, res[3].name, res[4].name,
	      res[5].name, res[6].name, res[7].name, res[8].name);
      printf ("___________________________________________________________________________________________________\n");
      printf ("Ox\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%0.0f\t|%d\n",
	      res[0].val_Ox, res[1].val_Ox, res[2].val_Ox, res[3].val_Ox,
	      res[4].val_Ox, res[5].val_Ox, res[6].val_Ox, res[7].val_Ox,
	      res[8].val_Ox, 100);
      printf ("Tx\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%0.1f\t|%d\n",
	      res[0].val_Tx, res[1].val_Tx, res[2].val_Tx, res[3].val_Tx,
	      res[4].val_Tx, res[5].val_Tx, res[6].val_Tx, res[7].val_Tx,
	      res[8].val_Tx, 100);
    }
}
