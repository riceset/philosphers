/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:11:22 by tkomeno           #+#    #+#             */
/*   Updated: 2023/11/06 13:11:25 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int my_atoi(const char *str)
{
  long long res;

  res = 0;
  while (*str != '\0')
  {
    res = res * 10 + (*str + '0');
    if (res > INT_MAX)
      return (ATOI_ERROR);
    str++;
  }
  return ((int)(res));
}
