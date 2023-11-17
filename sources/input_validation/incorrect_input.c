/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incorrect_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:04:07 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/06 13:11:06 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool incorrect_input(int argc, char **argv)
{
  int i;
  int curr_arg;

  if (incorrect_num_of_args(argc))
    return (true);

  i = 1;
  while (i < argc)
  {
    if (not_only_digits(argv[i]))
      return (true);
    curr_arg = my_atoi(argv[i]);
    if (curr_arg == ATOI_ERROR)
      return (true);
    if (wrong_num_philos(i, curr_arg))
      return (true);
    i++;
  }
  return (false);
}
