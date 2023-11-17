/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:31:49 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/17 10:31:52 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int setup_args(t_args *args, int argc, char **argv)
{
  args = alloc_args();
  if (args == NULL)
    return (ALLOC_ERROR);
  init_args(args, argc, argv);
  return (0);
}

