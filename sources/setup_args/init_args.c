/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:31:00 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/17 10:31:01 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

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

