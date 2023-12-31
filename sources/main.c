/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:46:22 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/17 10:31:34 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

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
