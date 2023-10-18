#include "philo.h"

#define ATOI_ERROR (-1)

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

bool is_digit(int c)
{
  return ('0' <= c && c <= '9');
}

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

int main(int argc, char **argv)
{
  if (incorrect_input(argc, argv))
    return (EXIT_FAILURE);

  printf("Hello World!\n");

  return (EXIT_SUCCESS);
}
