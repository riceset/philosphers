/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incorrect_num_of_args.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:07:30 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/06 13:07:37 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool incorrect_num_of_args(int argc)
{
  bool time_to_die_provided;
  bool time_to_die_not_provided;

  time_to_die_provided = (argc < 5);
  time_to_die_not_provided = (argc > 6);

  if (time_to_die_provided || time_to_die_not_provided)
    return (true);
  else
    return (false);
}
