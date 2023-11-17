#ifndef PHILO_H
#define PHILO_H

/* ************************************************************************** */
/*                                                                            */
/*                                 macros                                     */
/*                                                                            */
/* ************************************************************************** */

#define ATOI_ERROR (-1)

/* ************************************************************************** */
/*                                                                            */
/*                                 libraries                                  */
/*                                                                            */
/* ************************************************************************** */

//essential libraries
#include <pthread.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

//other libraries
#include <limits.h>
#include <stdbool.h>

//temporary libraries
#include <stdio.h>

/* ************************************************************************** */
/*                                                                            */
/*                                structs                                     */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_args
{
    int num_of_philosophers;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int num_times_each_philosopher_must_eat;
}   t_args;

typedef struct s_philosopher
{
    int id;
    pthread_t thread;
    t_args *args;
}   t_philosopher;


/* ************************************************************************** */
/*                                                                            */
/*                               prototypes                                   */
/*                                                                            */
/* ************************************************************************** */

//Validation
bool incorrect_input(int argc, char **argv);

//Validators
bool incorrect_num_of_args(int argc);
bool not_only_digits(char *str);
bool wrong_num_philos(int i, int curr_arg);

//helpers
bool is_digit(int c);
int my_atoi(const char *str);

#endif
