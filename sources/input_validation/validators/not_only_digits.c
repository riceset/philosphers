/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_only_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:08:12 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/06 13:12:15 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool not_only_digits(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!is_digit(str[i]))
      return (true);
    i++;
  }
  return (false);
}
