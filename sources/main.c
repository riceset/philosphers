/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:46:22 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/17 10:24:48 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdlib.h>

#define NUM_MUST_EAT_NOT_SET (-1)
#define ALLOC_ERROR 1

t_args *alloc_args(void)
{
  return ((t_args *)malloc(sizeof(t_args) * 1));
}

void init_args(t_args *args, int argc, char **argv)
{
  args->num_of_philosophers = my_atoi(argv[1]);
  args->time_to_die = my_atoi(argv[2]);
  args->time_to_eat = my_atoi(argv[3]);
  args->time_to_sleep = my_atoi(argv[4]);

  if (argc == 6)
    args->num_times_each_philosopher_must_eat = my_atoi(argv[5]);
  else
    args->num_times_each_philosopher_must_eat = NUM_MUST_EAT_NOT_SET;
}

int setup_args(t_args *args, int argc, char **argv)
{
  args = alloc_args();
  if (args == NULL)
    return (ALLOC_ERROR);
  init_args(args, argc, argv);
  return (0);
}

int main(int argc, char **argv)
{
  t_args args;

  if (incorrect_input(argc, argv))
    return (EXIT_FAILURE);
  if (setup_args(&args, argc, argv))
    return (EXIT_FAILURE);

  printf("%d\n", args.num_of_philosophers);

  return (EXIT_SUCCESS);
}
