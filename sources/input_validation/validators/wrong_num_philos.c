/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_num_philos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:08:54 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/06 13:08:58 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool wrong_num_philos(int i, int curr_arg)
{
  bool curr_arg_is_num_philos;
  bool not_between_constraints;

  curr_arg_is_num_philos = (i == 1);
  not_between_constraints = !(0 < curr_arg && curr_arg <= 250);

  if (curr_arg_is_num_philos && not_between_constraints)
    return (true);
  else
    return (false);
}
